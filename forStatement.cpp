/*




*/
#include<iostream>
int main() {

	// �ʱ�ȭ; ����; ����;
	// �ʱⰪ 0 / i�� 5���� ���� �� ���� / i++

	//for (int i = 0; i < 5; i++) {
	//	std::cout << i << std::endl;
	//}

	//for (int i = 10; i > 0; i--) {
	//	std::cout << i << std::endl;
	//}

	//// for�������� break ��� ����
	//// ex)

	//for (int i = 10; i > 0; i--) {
	//	if (i < 5) {
	//		break;
	//	}
	//	std::cout << i << std::endl;
	//}

	//for (int i = 0; i < 11; i++) {
	//	if (i % 2 == 0) {
	//		continue; // �� ���� ������ �ڵ带 �ǳʶٰ� ���� ������ �Ѿ
	//	}
	//	std:: cout << i << std::endl;
	//}

	//// 3�� ����� 5�� ����� �˻��ϴ� ���� (50����)
	//for (int i = 1; i < 51; i++) {
	//	if (i % 3 == 0 || i % 5 == 0) {
	//		std::cout << i << "�� 3 �Ǵ� 5�� ����Դϴ�." << std::endl;
	//	}
	//		
	//}
	//std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

	//// 1���� 100���� ��
	//int sum = 0;
	//for (int i = 0; i < 101; i++) {
	//	sum += i;
	//}
	//std::cout << sum << std::endl;

	//// for ���� ��ø ����, ���� for ��

	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		std::cout << "i �� : " << i << "  j �� : " << j << std::endl;
	//	}
	//}

	////���� ����, ������

	//for (int i = 1; i < 10; i++) {
	//	for (int j = 1; j < 10; j++) {
	//		std::cout << i * j << std::endl;
	//	}
	//}

	////ex) ���� �Է��� ���ڰ� ������� �˻�
	//int numInput;
	//bool isPositive = true;

	//std::cout << "�Է��� ������ ����" << std::endl;
	//std::cin >> numInput;

	//int number;
	//for (int i = 0; i < numInput; i++) {
	//	std::cout << i + 1 << " ��° ���ڸ� �Է��ض�.";
	//	std::cin >> number;

	//	if (number <= 0) {
	//		isPositive = !isPositive;
	//		break;
	//	}
	//}

	//if (isPositive) {
	//	std::cout << "+" << std::endl;
	//}
	//else {
	//	std::cout << "- or 0" << std::endl;
	//}

	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	//���� : ����� (��)

	
}