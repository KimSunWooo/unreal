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
			std::cout << "���ñݾ��� �����մϴ�. ������ �����մϴ�." << std::endl;
			break;
		}

		std::cout << "�߱����ӿ� ���� ���� ȯ���մϴ�." << std::endl;
		std::cout << "�ʱ� �õ�Ӵϴ�" << seed << "�� �Դϴ�." << std::endl;

		for (int i = 0; i < 3; i++) {
			std::cout << i + 1 << "�� ���ڸ� �Է��ϼ���" << std::endl;
			std::cin >> player[i];
		}
		std::cout << "������ �ݾ��� �Է� ���ּ���." << std::endl;
		std::cin >> bet;

		if (bet < 1000) {
			std::cout << "���� �ݾ��� �ʹ� �۽��ϴ�. �ּ� ���ñݾ���" << min << "�� �Դϴ�." << std::endl;
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
		
		
		std::cout << "����" << cnt + 1 << "ȸ�� �÷��� �ϼ̽��ϴ�." << std::endl;
		std::cout << "���� �����" << strike << "��Ʈ����ũ" << ball << "�� �Դϴ�." << std::endl;
		if (strike == 0) {
			std::cout << "0 ��Ʈ����ũ �Դϴ�. ���� �ݾ��� �ι谡 ���� �˴ϴ�." << std::endl;
			seed -= bet * 2;
			if (seed <= 0) {
				std::cout << "�õ�Ӵϸ� ��� ���� �ϼ̽��ϴ�. ������ ���� �մϴ�." << std::endl;
				break;
			}
		}
		else {
			std::cout << strike << " ��Ʈ����ũ �Դϴ�. ���ñݾ��� �ι踸ŭ�� �����޽��ϴ�." << std::endl;
			seed += bet * 2;
		}

		std::cout << "���� ���� �õ�Ӵϴ�" << seed << "�� �Դϴ�." << std::endl;
		if (cnt == 9) {
			std::cout << "10ȸ�� ��� �÷��� �ϼ̽��ϴ�." << std::endl;
			std::cout << "�� �õ�Ӵϴ�" << seed << "�� �Դϴ�." << std::endl;
			std::cout << "������ �����մϴ�." << std::endl;
			break;
		}
		strike = 0;
		ball = 0;
		cnt++;
	}
}