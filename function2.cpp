#include<iostream>
/*
[������ ����Ⱓ�� ���� ����]
�� ������ ����Ǵ� ��ġ�� ���� ũ�� ���������� ���������� ������
�� �޸� �� �����ϴ� �Ⱓ�� ������ �� �ִ� ������ ���� �������� �ִ�.


1. �������� 
	�� ���������� �߰�ȣ ���� ����Ǵ� ������ ��� ��������
	�� Ȱ�� ������ ������ ����� ��Ͽ����� ��ȿ�ϰ� ����� ������ ���������� �޸𸮿��� �������.
2. ��������
	�� ��� �ܺο��� ����. ���α׷� ��ü�� ���� ����
	�� ���α׷� ���� �� �����ǰ� ���α׷� ���� �� �Ҹ�
	�� ���������� ���� �ؾ� �Ѵ�.
*/

int globalValue = 10;
void GlobalVariable() {
	std::cout << globalValue << " : ���⼭�� ������ �� ����" << std::endl;
}

void LocalVariable() {
	int num = 1;
	{
		num = 2;

		int num2 = 5;
	}
	// num2 �� ���⼭ ���ٵ��� �ʴ´�.
}

void MyFunc1() {
	int myFuncNum = 10;
	myFuncNum++;
}
void MyFunc2() {
	int num1 = 5;
	int num2 = 8;
	num1++;
	num2++;
	std::cout << "�������� num1 �� ������ : " << num1 << std::endl;
	std::cout << "�������� num2 �� ������ : " << num2 << std::endl;
}

int Sum(const int a, int b) {
	// �Ű������� const Ű���尡 ������ �Լ� ���ο��� a���� ������ �� ����. ������ ����
}
int main() {
	// �Լ� ȣ��
	MyFunc1();
	MyFunc2();


}

int Add(int a, int b) {
	return a + b;
}
