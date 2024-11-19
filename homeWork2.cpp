#include<iostream>
int main() {
	srand(time(NULL));
	int player[3];
	int result[3];
	int seed = 10000;
	int min = 1000;
	int strike = 0;
	int ball = 0;
	int cnt = 0;
	int bet;

	while (cnt < 10) {
		int com[3] = { rand() % 10, rand() % 10, rand() % 10 };
		//for (int i = 0; i < 3; i++)
		//{
		//	std::cout << com[i] << std::endl;
		//}
		if (seed < 1000) {
			std::cout << "베팅금액이 부족합니다. 게임을 종료합니다." << std::endl;
			break;
		}

		std::cout << "야구게임에 오신 것을 환영합니다." << std::endl;
		std::cout << "초기 시드머니는" << seed << "원 입니다." << std::endl;

		for (int i = 0; i < 3; i++) {
			std::cout << i + 1 << "번 숫자를 입력하세요" << std::endl;
			std::cin >> player[i];
		}
		std::cout << "베팅할 금액을 입력 해주세요." << std::endl;
		std::cin >> bet;

		if (bet < 1000) {
			std::cout << "배팅 금액이 너무 작습니다. 최소 배팅금액은" << min << "원 입니다." << std::endl;
			continue;
		}
		else {
			seed -= bet;
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == j && player[i] == com[j]) {
					strike++;
					continue;
				}
				else if (i != j && player[i] == com[j]) {
					ball++;
					continue;
				}
				else {
					result[i] = 0;
					continue;
				}
			}
		}
		
		
		std::cout << "현재" << cnt + 1 << "회차 플레이 하셨습니다." << std::endl;
		std::cout << "게임 결과는" << strike << "스트라이크" << ball << "볼 입니다." << std::endl;
		if (strike == 0) {
			std::cout << "0 스트라이크 입니다. 베팅 금액의 두배가 차감 됩니다." << std::endl;
			seed -= bet * 2;
			if (seed <= 0) {
				std::cout << "시드머니를 모두 탕진 하셨습니다. 게임을 종료 합니다." << std::endl;
				break;
			}
		}
		else {
			std::cout << strike << " 스트라이크 입니다. 베팅금액의 두배만큼을 돌려받습니다." << std::endl;
			seed += bet * 2;
		}

		std::cout << "현재 남은 시드머니는" << seed << "원 입니다." << std::endl;
		if (cnt == 9) {
			std::cout << "10회를 모두 플레이 하셨습니다." << std::endl;
			std::cout << "총 시드머니는" << seed << "원 입니다." << std::endl;
			std::cout << "게임을 종료합니다." << std::endl;
			break;
		}
		strike = 0;
		ball = 0;
		cnt++;
	}
}