/*****
- while��
�������� ���� ���� ��� �ݺ��Ǵ� ����
���Ϲ������� �ݺ�Ƚ���� �̸� �������� �ʾҰų� Ư�������� ������ ������ �ݺ��ؾ��ϴ� ��� ���


-�⺻����-
while (true)
	{
		������ �����ϸ� �ش� �ڵ����� ����.
		���������� �־�߸� while���� ����.
	}


[do-while]
�������� ������ ���ο� ������� �ּ� �ѹ��� ����ž��� �� ���.
	do {
		// ���� �� �ڵ�
	} while (����);
*****/

#include<iostream>

int main() {
	
		//int num = 0;

		//while (num < 10)
		//{
		//	num++;
		//	std::cout << num << std::endl;
		//}

		//int sum = 0;
		//int num2 = 0;

		//while (num < 10)
		//{
		//	num++;
		//	sum += num;
		//	std::cout << num << std::endl;
		//	if (sum > 100) break;

		//}

		//// 1. while ���� �̿��� �Է��� ���ڸ�ŭ ���
		//std::cout << "���ڸ� �Է��϶�.";
		//int inputNum;
		//std::cin >> inputNum;
		//int count = 0;
		//while (count < inputNum) {
		//	std::cout << "���ڸ� �Է��� ��ŭ ����.  ";
		//	count++;
		//}
		//
		//// 2. �Է��� ����ؼ� �ް� 0�� �ԷµǸ� ��� ���� ���ϰ� ������ �����Ѵ�.

		//int iNum = 1;
		//int total = 0;

		//while (iNum != 0) {
		//	std::cout << "���ڸ� �Է��ض�, 0�� �ԷµǸ� ����." << std::endl;

		//	std::cin >> iNum;
		//	total += iNum;

		//	std::cout << total << std::endl;
		//}

	//int inputNum = 0;
	//int total = 0;

	//do {
	//	std::cout << "0 ���� ū ���ڸ� �Է��ض�." << std::endl;
	//	std::cin >> inputNum;
	//	total += inputNum;
	//} while (inputNum != 0);

	//int i = 0;

	//std::cout << "while �� ���� : " << std::endl;
	//while (i > 0) {
	//	std::cout << "�� �޽����� ��µ��� �ʽ��ϴ�." << std::endl;
	//}

	//do {
	//	std::cout << "�� �޽����� �ּ� �ѹ� ��µ˴ϴ�." << std::endl;
	//} while (i > 0);
	srand(time(NULL));
	int random = rand() % 3;
	

	std::cout << random << std::endl;

	// 2��° ����
	// ���� ���� �� �����ϱ�

	// �÷��̾� - ���� ���� �� �� �Է¹޴´�.
	// ��ǻ�� - �����ϰ� ���� ���� �� �� �ϳ��� ��.

	// ����� �����. 

	// �������� : 10�� �����ϱ�
}