#include<iostream>
/*

*/
int main() {
	int numbers[10];
	

	for (int i = 0; i < 10; i++)
	{
		numbers[i] = i;
	}

	// ���� �� ������
	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "] �ε��� : " << numbers[i] << std::endl;
	}
	// ���ÿ� ������
	int dest, sour, tmp;

	for (int i = 0; i < 1000; i++) {
		dest = rand() % 10; // 0 ~ 9
		sour = rand() % 10; // 0 ~ 9

		tmp = numbers[dest];
		numbers[dest] = numbers[sour];
		numbers[sour] = tmp;
	}

	// ���� �� ������
	for (int i = 0; i < 10; i++)
	{
		std::cout << "numbers[" << i << "] �ε��� : " << numbers[i] << std::endl;
	}

	// �ζǾ˰���..

	int lotto[45];
	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}
	for (int i = 0; i < 777; i++) {
		dest = rand() % 45; // 0 ~ 9
		sour = rand() % 45; // 0 ~ 9

		tmp = lotto[dest];
		lotto[dest] = lotto[sour];
		lotto[sour] = tmp;
	}

	for (int i = 0; i < 6; i++) {
		std::cout << "�̹��� ��÷��ȣ��" << lotto[i] << std::endl;
	}


	// �ǽ�
	// 10���� �л� ������ �Է�, �迭�� �����ϰ� ������ ����� ���ض�.

	int score[10];
	int sum = 0;;
	double avg = 0;
	for (int i = 0; i < 10; i++) {
		std::cout << i + 1 << "��° �л��� �����Է�" << std::endl;
		std::cin >> score[i];
		 
	}
	
	for (int i = 0; i < 10; i++) {
		sum += score[i];
		avg += score[i] / 10;
	}
	std::cout << "������ �հ�� : " << sum << std::endl;
	std::cout << "������ ����� : " << avg << std::endl;
}