/**************************
[�Ҹ���]
 - ��ü�� �Ҹ�� �� �ڵ����� �Ҹ�Ǵ� �Լ�
 - �Ű������� ����
 - ��ȯ�� ����
 - �����ε� �Ұ���. (�������� �Ҹ��ڸ� ������ �� ����)
**************************/
#include<iostream>
#include<string>
class MyClass
{
public:
	// ������
	MyClass(int size);
	// �Ҹ���
	~MyClass();

private:
	int* data;
};

// ����
MyClass::MyClass(int size)
{
	data = new int[size];
	std::cout << "���� ������" << std::endl;
}
// �Ҹ�
MyClass::~MyClass()
{	
	delete[] data;
	data = nullptr;
	std::cout << "���� �Ҹ���" << std::endl;
}
int main() {
	MyClass* m = new MyClass(10);
	delete m;
	m = nullptr;

}