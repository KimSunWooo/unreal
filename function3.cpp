#include<iostream>
/*
[�Լ� �����ε�]
�� ������ �Լ� �̸��� ����ؼ� �Ű������� Ÿ��, ����, �Ǵ� ������ �ٸ��� ǥ���ϴ� ��.
�� ����� �۾��� �����ϴ� �����Լ��� �ִ� ��� �� �Լ��� �ٸ� �̸��� �ο��ϴ� �ͺ��� 
	�Լ� �����ε��� ����ϸ� �ڵ��� �������� ���Ǹ� �ϳ��� �Լ��� �پ��� ������ �Լ��� ȣ���� �� �ִ�.

[�Լ� �����ε� ���� ����]
1. �Լ��̸��� �����ؾ� �Ѵ�.
2. ���� Ÿ���� �������� �ƴϴ�.
3. �Ű������� ������ Ÿ���� �ٸ��ų� ������ �޶���Ѵ�.

* ���� üũ
* �� �Լ� �����ε��� ����?
* �� �Լ� �����ε��� �������̵��� ��������?
*/
int addNum(int a, int b) {
	std::cout << a + b << std::endl;;
	return a + b;
}

double addNum(double a, double b) {
	std::cout << a + b << std::endl;;
	return a + b;
}

int minusNum(int a, int b) {
	std::cout << a - b << std::endl;;
	return a - b;
}

double minusNum(double a, double b) {
	std::cout << a + b << std::endl;;
	return a - b;
}

int multiNum(int a, int b) {
	std::cout << a * b << std::endl;;
	return a * b;
}

double multiNum(double a, double b) {
	std::cout << a * b << std::endl;;
	return a * b;
}

int devideNum(int a, int b) {
	std::cout << a / b << std::endl;;
	return a / b;
}

double devideNum(double a, double b) {
	std::cout << a /  b << std::endl;;
	return a / b;
}

int square(int a, int b) {
	std::cout << a << "��" << b << "��" << " �غ��� ���̷� ������ �簢���� ���̴�" << a * b << " �Դϴ�." << std::endl;
	return a * b;
}

double circle(int a) {
	std::cout << "�������� " << a << "�� ���� ���̴�" << a * a * 3.14 << " �Դϴ�" << std::endl;
	return 0;
}
int main() {
	
	/*
	1. ���ϱ� ���� ���ϱ� ������ �Լ� �����.
	- �����ε��� ����� Ȱ���ؼ� �������� �Ǽ���.
	2. �簢���� ���� ������ ����ϴ� �Լ��� ������.
	*/

	addNum(1, 2);
	addNum(1.1, 2.2);
	minusNum(4, 2);
	minusNum(4.5, 2.1);
	multiNum(2, 5);
	multiNum(2.4, 5.1);
	devideNum(5, 3);
	devideNum(5.4, 3.6);
	square(4, 2);
	circle(7);
}