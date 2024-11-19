#include<iostream>
using namespace std;

void shuffle(int card[]) {
	srand(time(NULL));
	
	for (int i = 0; i < 52; i++) {
		int randomNum = (rand() % 52);
		
		int tmp = card[randomNum];
		card[randomNum] = card[i];
		card[i] = tmp;
	}

}

int main() {
	srand(time(NULL));
	// 카드를 뽑기 시작하는 순서, 0번째 카드부터 뽑는다. 랜덤으로 섞기 때문에 섞은 이후는 차례대로 3개씩 뽑으면된다.
	int tmp = 0;
	// 게임의 횟수. 13이 되면 게임이 종료된다.
	int cnt = 0;
	// 시드금액
	int seed = 10000;
	// 최소 베팅금액
	int min = 1000;
	// 최소 베팅금액
	int bet;
	// 라운드마다 뽑는 카드의 배열
	int turn[3] = {};
	// 다음 라운드 진행여부
	char nextYn;

	int card[52] = {};
	for (int i = 0; i < 52; i++) {
		// 52장의 카드에 순서대로 0 ~ 51을 대입. 0이 A의 역할을 한다.
		// 0 ~ 12 는 에이스, 13 ~ 25는 클로버, 26 ~ 38은 다이아몬드, 39 ~ 51은 하트
		// 위의 조건에 대한 구분은 단위숫자로 나눴을 때 몫을 기준으로 구분한다. 
		// 몫이 0 이면 에이스, 1이면 클로버...
		card[i] = i;
	}
	
	// card 
	shuffle(card);

	cout << "도박장에 오신것을 환영합니다. 시작 시드머니는" << seed << "원 입니다." << endl;;
	while (cnt < 17 || seed > 0) {
		//turn[0] = card[tmp];
		//turn[1] = card[tmp + 1];
		//turn[2] = card[tmp + 2];

		//for (int i = 0; i < 3; i++) {
		
		//}
		// 
		// cout << "이번 라운드는 승리하셨습니다." << endl;
		cout << "베팅 금액을 입력해주세요.";
		cin >> bet;
		if (bet < 1000) {
			cout << "베팅 금액은 1000원 이상이어야 합니다." << endl;
			continue;
		}
		seed -= bet;
		int jNum = rand() % 10;

		// 앞에서부터 카드 3개를 뽑는다.
		for (int i = tmp; i < tmp + 3; i++) {
			cout << cnt + 1 << "라운드" << (i % 3) + 1 << "번째 카드는";
			switch (card[i]/13)
			{
			case 0 : cout << "스페이드" << (card[i] % 13) + 1;
				cout << "입니다." << endl;
				break;
			case 1 : cout << "클로버" << (card[i] % 13) + 1;
				cout << "입니다." << endl;
				break;
			case 2 : cout << "다이아몬드" << (card[i] % 13) + 1;
				cout << "입니다." << endl;
				break;
			case 3 : cout << "하트" << (card[i] % 13) + 1;
				cout << "입니다." << endl;
				break;
			}
			turn[i % 3] = (card[i] % 13) + 1;
		}

		if (max(turn[0], turn[1]) > turn[2] && std::min(turn[0], turn[1]) < turn[2]) {
			cout << "이번 라운드는 승리하셨습니다." << endl;
			int jNum = rand() % 10;
			if (jNum == 0) {
				// 잭팟 확률은 임의로 10%로 설정.
				cout << "축하 합니다 잭팟 입니다. 베팅금의 10 배가 적립됩니다." << endl;
				seed += bet * 10;
			}
			else {
				cout << "베팅 금액의 2배가 추가로 적립됩니다." << endl;
				seed += bet * 2;
			}
			cout << "다음 라운드를 진행 하시겠습니까 ?" << endl;
			cin >> nextYn;
		}
		else {
			cout << "이번 라운드는 패배하셨습니다." << endl;
			cout << "베팅 금액의 2배가 추가로 차감됩니다." << endl;
			seed -= bet * 2;
			if (seed < 0) {
				cout << "자본을 탕진하셨습니다. 게임을 진행할 수 없습니다." << endl;
				break;
			}
			cout << "남은 시드머니는" << seed << "원 입니다." << endl;
			cout << "다음 라운드를 진행 하시겠습니까 ? (y / n)" << endl;
			cin >> nextYn;
		}
		
		if (nextYn == 'y' || nextYn == 'Y') {
			cout << "총 시드머니는" << seed << "원 입니다." << endl;
			cnt++;
			tmp += 3;
			continue;
		}
		else if (nextYn == 'n' || nextYn == 'N') {

			cout << "총 시드머니는" << seed << "원 입니다." << endl;
			cout << "수고하셨습니다." << endl;
			break;
		}
		
	}

}