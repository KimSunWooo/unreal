#include<iostream>
/******
�б� (���ǹ�, if��)
- ���ǹ��̶�� �ϸ� ���α׷��� �����帧�� �����ϴµ��� ���ȴ�.
- �־��� ������ ������ ���������� ���� �ڵ� ����� �����ϰ� �Ѵ�.

if(������) {
	�ڵ�1
}

- �������� ���̸� ������ �ڵ��� ����. �ƴϸ� ��ŵ
- if���� ������ ���� ������ ������ �� ���̴°� ����.

[else]
�ܵ����δ� �� �� ����.

[else if]
if(���� 1) {
	���� 1�� ��
}
else if(���� 2){
	���� 1�� �����̰� ���� 2�� ��
}
else {
	����1, 2�� ��� ������ ��.
}
******/

int main() {
	//if (true /* ������*/) {
	//	std::cout << "���� ���ǹ��� ���� �� �ڵ���" << std :: endl;
	//}
	//else if (false /* �� �ٸ� ������*/) {
	//	std::cout << "���� �ִ� if���� ���ǿ� �������� �ʰ�, �ش������� �����ϴ� ��� ����Ǵ� �ڵ���" << std::endl;
	//}
	//else {
	//	std::cout << "���� �ƹ� ���ǿ��� �ش���� ���� �� �ڵ���" << std::endl;
	//}

	//if (true /*������1*/) {
	//}
	//if (false /*������2*/) {
	//}
	//else {
	//	std::cout << "�ٷ����� ������ (������ 2)�� ���̸� ���Ⱑ ����" << std::endl;
	//}

	//int number;
	//std::cout << "���� �Է�" << std::endl;

	//std::cout << "������ �Է��Ͻÿ� : ";
	//std::cin >> number;

	//if (number > 0) {
	//	std::cout << "0���� Ŭ ��" << std::endl;
	//}
	//else {
	//	std::cout << "0���� ���� ��" << std::endl;
	//}

	//std::cout << "������ �Է� �غ��ÿ� : " << std::endl;
	//int score;

	//std::cin >> score;

	//if (score > 90) {
	//	std::cout << "A" << std::endl;
	//}
	//else if (90 > score > 80) {
	//	std::cout << "B" << std::endl;
	//}
	//else if (80 > score > 70) {
	//	std::cout << "C" << std::endl;
	//}
	//else if (70 > score > 60) {
	//	std::cout << "D" << std::endl;
	//}
	//else {
	//	std::cout << "F" << std::endl;
	//}

	// �ǽ� 1
	// �Է��� �޴´�. (������ �Է� �޴´�.)

	// 3 ~ 5���� ��
	// 6 ~ 8���� ����
	// 9 ~ 11 ���� ����
	// 12 ~ 2���� �ܿ�

	std::cout << "���ڸ� �Է��Ͻÿ�" << std::endl;
	int month;
	std::cin >> month;
	std::cout << month << std::endl;

	if (2 < month && month <= 5) {
		std::cout << "1" << std::endl;
		std::cout << "��" << std::endl;
	}
	else if (5 < month && month <= 8) {
		std::cout << "2" << std::endl;
		std::cout << "����" << std::endl;
	}
	else if (8 < month && month <= 11) {
		std::cout << "3" << std::endl;
		std::cout << "����" << std::endl;
	}
	else if (month == 12 || 1 <= month < 3) {
		std::cout << "4" << std::endl;
		std::cout << "�ܿ�" << std::endl;
	}
	else {
		std::cout << "5" << std::endl;
		std::cout << "�߸��� �� �Դϴ�." << std::endl;
	}
}