#include<iostream>
/*
[�迭 - array]
�� ������ Ÿ���� ���� ���� ���������� ������ �� �ִ� ������ ����
�� �޸�󿡼� �������� ������ ������ �� ��Ҵ� �ε����� ���� ������ �� �ִ�.
�� �迭�� ������ �� ������ ũ�⸦ ���� �� �� ����.
�� �迭�� ��� ��Ҵ� ������ ������ Ÿ���� ������ �Ѵ�.
�� ���ӵ� ������ ����Ǳ� ������ ��ҿ� ���� �ε��� ������ �ſ� ������.

[����]

�ڷ��� / �迭�̸� / [�迭�� ����];
ex) int arr[5];
*/
int main() {
	// �ʱ�ȭ ���
	// 1. ũ�⸦ ����ϰ� �ʱ�ȭ
	int arr[4] = {1, 2, 3, 4};

	// 2. �迭�� ũ�⸦ �����ϰ� �ʱ�ȭ
	int arr2[] = { 1, 2, 3 }; // ũ��� 3

	// 3. ũ�⸦ ��������� �����ϰ� �Ϻο�Ҹ� �ʱ�ȭ.
	int arr3[5] = { 1, 2, 3 }; // �������� 0���� �ʱ�ȭ { 1, 2, 3, 0, 0 };
	
	// 4. ����Ҹ� �ʱ�ȭ ���� ������ �⺻������ �ʱ�ȭ.
	int arr4[5] = {};

	std::cout << arr[0] << std::endl;
	std::cout << arr2[1] << std::endl;
	std::cout << arr3[2] << std::endl;
	std::cout << arr4[3] << std::endl;

	int numbers[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i++) {
		std::cout << i << " �� �ε����� ������ ���" << std::endl;
	}

	std::cout << arr << std::endl;
	std::cout << &arr[0] << std::endl;

	// �迭�� ����� ���ڸ� ã�ƺ��ô�.
	int numArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int select;
	bool isFind = false;
	std::cin >> select;

	for (int i = 0; i < 10; i++) {
		if (numArr[i] == select) {
			isFind = true;
			break;
		}

		
	}
	if (isFind) {
		std::cout << "ã��" << std::endl;
	}
	else {
		std::cout << "����" << std::endl;
	}

	//���� �� �ʱ�ȭ
	int numArr2[] = { 1, 2, 3, 4, 5 };
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += numArr2[i];
	}
	std::cout << "�հ� : " << sum << std::endl;
} 