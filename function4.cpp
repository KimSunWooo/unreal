#include<iostream>
/*
�Լ��� ȣ���ϸ� �� �Լ��� �ִ� �޸� �ּҷΰ��� ����� �� �� ���ƿ´�.

[��ũ�� �Լ�]
���Լ��� �����̾ƴ϶� ���ڿ��� ġȯ���ִ� �����̴�.
��������� �����.
����ȣ �ϳ��� ���� ����� �̻��ϰ� ����� �� �ִ�
���ؽ�Ʈ�� ġȯ�� �ִ� ���̱� ������ Ÿ�Կ� ���� �������� �����̵��� �ʴ´�.
*/

inline int Sum(int a, int b) {
	return a + b;
}

int FindMaxNum(int a, int b) {
	if (a > b) {
		std::cout << a << "�� �� Ů�ϴ�" << std::endl;
		return a;
	}
	else if (a == b) {
		std::cout << "�� ������ ũ�Ⱑ �����մϴ�." << std::endl;
		return a;
	}
	else {
		std::cout << b << "�� �� Ů�ϴ�" << std::endl;
		return b;
	}
}

int isPrime(int a) {
	if (a == 2 || a == 3) {
		std::cout << a << "�� �Ҽ� �Դϴ�." << std::endl;
	} else {
		for (int i = 2; i < a/2; i++) {
			if (a % i == 0) {
				std::cout << a << "�� �Ҽ��� �ƴմϴ�." << std::endl;
				return 0;
			}
			
		}
		return 1;
	}
}

int Attack(int playerType, int targetHp) {
	switch (playerType)
	{
	case 1:
		std::cout << "���� ����� HP��" << targetHp << " �Դϴ�." << std::endl;
		std::cout << "�÷��̾ ����� �����ߴ�." << std::endl;
		break;
	case 2:
		std::cout << "���� �÷��̾��� HP��" << targetHp << " �Դϴ�." << std::endl;
		std::cout << "����� �÷��̾ �����ߴ�." << std::endl;
		break;
	default: std::cout << "�߸��� �����Դϴ�." << std::endl;
	}
	return targetHp;
}


int main() {
	int player = 1;
	int playerHp = 50;
	int target = 2;
	int targetHp = 100;
	Attack(player, targetHp);
	std::cout << "///////////////////////////" << std::endl;
	Attack(target, playerHp);
	std::cout << "///////////////////////////" << std::endl;
	FindMaxNum(10, 7);
	std::cout << "///////////////////////////" << std::endl;
	isPrime(2147483645);
	isPrime(2);
	isPrime(3);
	// a = 1 + 2
	// inline ���� ���� �Լ� ��ü�� �����ؼ� ���� ��. �ð����� ���鿡�� �̵��̵� �� ����.
	// �Լ� ȣ�� �Ծ� Ȯ�� 

	// ���� ����
	/*
	* 1)
	- �÷��̾ �ִ�
	- ����� �ִ�.
	- Attak �̶�� �Լ��� �����(�Ű������� 2��)
	- ù ��° �Ű������� �÷��̾ ��Ÿ���� ����Ÿ��, �� ��° �Ű������� Ÿ���� �Ǵ� HP
	- ���� Ÿ���� int ���ϵǴ� ���� Ÿ���� HP

	2)
	- �Է¹��� �� ���� �� ū ���ڸ� �����ϴ� �Լ���������.
	3)
	- ���ڸ� �Է¹ް� �� ���ڱ����� ���� ���ϴ� �Լ��� ������
	*/
}