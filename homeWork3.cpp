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
	// ī�带 �̱� �����ϴ� ����, 0��° ī����� �̴´�. �������� ���� ������ ���� ���Ĵ� ���ʴ�� 3���� ������ȴ�.
	int tmp = 0;
	// ������ Ƚ��. 13�� �Ǹ� ������ ����ȴ�.
	int cnt = 0;
	// �õ�ݾ�
	int seed = 10000;
	// �ּ� ���ñݾ�
	int min = 1000;
	// �ּ� ���ñݾ�
	int bet;
	// ���帶�� �̴� ī���� �迭
	int turn[3] = {};
	// ���� ���� ���࿩��
	char nextYn;

	int card[52] = {};
	for (int i = 0; i < 52; i++) {
		// 52���� ī�忡 ������� 0 ~ 51�� ����. 0�� A�� ������ �Ѵ�.
		// 0 ~ 12 �� ���̽�, 13 ~ 25�� Ŭ�ι�, 26 ~ 38�� ���̾Ƹ��, 39 ~ 51�� ��Ʈ
		// ���� ���ǿ� ���� ������ �������ڷ� ������ �� ���� �������� �����Ѵ�. 
		// ���� 0 �̸� ���̽�, 1�̸� Ŭ�ι�...
		card[i] = i;
	}
	
	// card 
	shuffle(card);

	cout << "�����忡 ���Ű��� ȯ���մϴ�. ���� �õ�Ӵϴ�" << seed << "�� �Դϴ�." << endl;;
	while (cnt < 17 || seed > 0) {
		//turn[0] = card[tmp];
		//turn[1] = card[tmp + 1];
		//turn[2] = card[tmp + 2];

		//for (int i = 0; i < 3; i++) {
		
		//}
		// 
		// cout << "�̹� ����� �¸��ϼ̽��ϴ�." << endl;
		cout << "���� �ݾ��� �Է����ּ���.";
		cin >> bet;
		if (bet < 1000) {
			cout << "���� �ݾ��� 1000�� �̻��̾�� �մϴ�." << endl;
			continue;
		}
		seed -= bet;
		int jNum = rand() % 10;

		// �տ������� ī�� 3���� �̴´�.
		for (int i = tmp; i < tmp + 3; i++) {
			cout << cnt + 1 << "����" << (i % 3) + 1 << "��° ī���";
			switch (card[i]/13)
			{
			case 0 : cout << "�����̵�" << (card[i] % 13) + 1;
				cout << "�Դϴ�." << endl;
				break;
			case 1 : cout << "Ŭ�ι�" << (card[i] % 13) + 1;
				cout << "�Դϴ�." << endl;
				break;
			case 2 : cout << "���̾Ƹ��" << (card[i] % 13) + 1;
				cout << "�Դϴ�." << endl;
				break;
			case 3 : cout << "��Ʈ" << (card[i] % 13) + 1;
				cout << "�Դϴ�." << endl;
				break;
			}
			turn[i % 3] = (card[i] % 13) + 1;
		}

		if (max(turn[0], turn[1]) > turn[2] && std::min(turn[0], turn[1]) < turn[2]) {
			cout << "�̹� ����� �¸��ϼ̽��ϴ�." << endl;
			int jNum = rand() % 10;
			if (jNum == 0) {
				// ���� Ȯ���� ���Ƿ� 10%�� ����.
				cout << "���� �մϴ� ���� �Դϴ�. ���ñ��� 10 �谡 �����˴ϴ�." << endl;
				seed += bet * 10;
			}
			else {
				cout << "���� �ݾ��� 2�谡 �߰��� �����˴ϴ�." << endl;
				seed += bet * 2;
			}
			cout << "���� ���带 ���� �Ͻðڽ��ϱ� ?" << endl;
			cin >> nextYn;
		}
		else {
			cout << "�̹� ����� �й��ϼ̽��ϴ�." << endl;
			cout << "���� �ݾ��� 2�谡 �߰��� �����˴ϴ�." << endl;
			seed -= bet * 2;
			if (seed < 0) {
				cout << "�ں��� �����ϼ̽��ϴ�. ������ ������ �� �����ϴ�." << endl;
				break;
			}
			cout << "���� �õ�Ӵϴ�" << seed << "�� �Դϴ�." << endl;
			cout << "���� ���带 ���� �Ͻðڽ��ϱ� ? (y / n)" << endl;
			cin >> nextYn;
		}
		
		if (nextYn == 'y' || nextYn == 'Y') {
			cout << "�� �õ�Ӵϴ�" << seed << "�� �Դϴ�." << endl;
			cnt++;
			tmp += 3;
			continue;
		}
		else if (nextYn == 'n' || nextYn == 'N') {

			cout << "�� �õ�Ӵϴ�" << seed << "�� �Դϴ�." << endl;
			cout << "�����ϼ̽��ϴ�." << endl;
			break;
		}
		
	}

}