/*****
[����ü]
 - ����ü�� �������� ������ ���� �ϳ��� ������ ������ �����ϴ� ����� ���� ������ �����̴�.
 - ����ü�� ������ ������ ����� ������ �̷��� ������� ���� �ٸ� ������ Ÿ���� �� �ִ�.
 - c++������ �Լ��� ������ �����ϴ�.

 // Ű����, 
******/

#include <iostream>
// �л��� ���õ� ������ ����ٸ�.
struct Student {
	//���⿡ �ʿ��� ������� ����
	int age;
	int phoneNum;
	std::string name;

};
struct Point {
	int x;
	int y;
	void Print(); //c++���� �Լ��� ����� ���Խ�ų �� �ִ�.
};
struct Person
{
	std::string name;
	std::string phoneNum;
	int age;
};
struct Test {
	int c;
	short a;
	char b;
};
int main() {

	Student st;
	Person p;

	st.age = 10;
	st.name = "su";
	st.phoneNum = 1234;

	p.name = "su1";
	p.phoneNum = 21345;

	std::cout << "���� : " << st.age << std::endl;
	std::cout << "�̸� : " << st.name << std::endl;
	std::cout << "�� : " << st.phoneNum << std::endl;

	Point pp;
	pp.x = 10;
	pp.y = 20;

	std::cout << "����ü pp �� x ��" << pp.x << std::endl;
	std::cout << "����ü pp �� y ��" << pp.y << std::endl;


	pp.Print();

	Point p1 = {20, 30};
	p1.Print();

	Person person[3];
	person[0].name = "ȫ�浿";
	person[0].phoneNum = "010-1234";
	person[0].age = 10;

	person[1].name = "ȫ�浿2";
	person[1].phoneNum = "010-1236";
	person[1].age = 16;

	person[2].name = "ȫ�浿3";
	person[2].phoneNum = "010-1235";
	person[2].age = 17;

	Person person1[3] = {
		{"�輱��", "010-8956", 28},
		{"�輱��2", "010-7382", 29},
		{"�輱��3", "010-4100", 30}
	};

	for (int i = 0; i < 3; i++)
	{
		std::cout << person[i].name << std::endl;
		std::cout << person[i].age << std::endl;
		std::cout << person[i].phoneNum << std::endl;
	}

	Test test;

	std::cout << sizeof(test) << std::endl;
}

void Point::Print()
{
	std::cout << "���� Point ����ü�� ��� �Լ��̴�" << std::endl;
	std::cout << x*y << std::endl;
}
