/*
[�Լ�]
�� Ư�� �۾��� �����ϴ� �ڵ��� ����
�� �ڵ��� ������, ������ �����ϱ� ����
�� ������ Ŀ���� ���α׷��ϼ��� ����, ���������� ���� �ʱ� ������ ��ɺ��� ����ȭ �ʿ�.
�� �ڵ��� ���뼺�� ����.
�� �Լ� �̸����� � ����� �ϴ��� ������ �� �ֵ�.

[�Լ��� ����]
�� �⺻������ �Լ��� �Ű������� ������ ��ȯ���� ������ ���� �װ��� ���·� ������ �� �ִ�.
	- �Ű������� ��ȯ���� ��� �ִ� ���
	- �Ű������� �ְ� ��ȯ���� ���� ���
	- �Ű������� ���� ��ȯ���� �ִ� ���
	- �Ű������� ���� ��ȯ���� ���� ���

	int Sum(int x, int y) {
		int result;
		result = x + y;
		return result;
	};

	int : ��ȯ Ÿ��
	Sum : �Լ��̸�
	(int x, int y) : �Ű�����

	=> �Ű����� x, y �� �޾� Sum() �Լ��� �����ϰ� int ���·� ������� ����Ѵ�.
	=> �Է����� : �Է����·� ������ ������ �Ű�����,�Ķ���� ��� ��, �� �̻��� �Ű������� ������ �ʿ䰡 ���� �� �޸��� �����Ѵ�.
	=> �Լ��� ��� : �ش� �Լ� ������ �Էº��� (�Ű����� �Ǵ� �Ķ����) �� ���� result�� �����ϰ� result�� ��ȯ.

	>>>>> �Ը� ū ������Ʈ ������ ���� ������ ������Ͽ� �����ص� �� cpp���Ͽ��� �����ϴ� �� ���� ���� ��.
*/

#include<iostream>

// 1. �Ű������� �ְ� ��ȯ���� �ִ� ���
int Sum(int x, int y) {
	int result;
	result = x + y;
	return result;
};

// 2. �Ű������� �ְ� ��ȯ���� ���� ���
void Sum1(int x, int y) {
	int result;
	x + y;
	
};
// 3. �Ű������� ���� ��ȯ���� ���� ���
int ReadNum() {
	int num;
	std::cin >> num;
	return  num;

};

// 4. �Ű������� ���� ��ȯ���� ���� ���
void ReadNum2() {
	std::cout << "���" << std::endl;

};

void MyPrint01();
int main() {
	int result;
	result = Sum(1, 2);

	// 2
	Sum1(1, 2);

	// 3
	int result1;
	result1 = ReadNum();

	// 4
	ReadNum2();
	


}
