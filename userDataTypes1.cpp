/*****
[구조체]
 - 구조체는 여러개의 변수를 묶어 하나의 데이터 단위로 정의하는 사용자 정의 데이터 형식이다.
 - 구조체는 각각의 변수를 멤버로 가지고 이러한 멤버들은 서로 다른 데이터 타입일 수 있다.
 - c++에서는 함수도 포함이 가능하다.

 // 키워드, 
******/

#include <iostream>
// 학생과 관련된 정보를 만든다면.
struct Student {
	//여기에 필요한 멤버들이 들어간다
	int age;
	int phoneNum;
	std::string name;

};
struct Point {
	int x;
	int y;
	void Print(); //c++에선 함수도 멤버로 포함시킬 수 있다.
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

	std::cout << "나이 : " << st.age << std::endl;
	std::cout << "이름 : " << st.name << std::endl;
	std::cout << "폰 : " << st.phoneNum << std::endl;

	Point pp;
	pp.x = 10;
	pp.y = 20;

	std::cout << "구조체 pp 의 x 값" << pp.x << std::endl;
	std::cout << "구조체 pp 의 y 값" << pp.y << std::endl;


	pp.Print();

	Point p1 = {20, 30};
	p1.Print();

	Person person[3];
	person[0].name = "홍길동";
	person[0].phoneNum = "010-1234";
	person[0].age = 10;

	person[1].name = "홍길동2";
	person[1].phoneNum = "010-1236";
	person[1].age = 16;

	person[2].name = "홍길동3";
	person[2].phoneNum = "010-1235";
	person[2].age = 17;

	Person person1[3] = {
		{"김선우", "010-8956", 28},
		{"김선우2", "010-7382", 29},
		{"김선우3", "010-4100", 30}
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
	std::cout << "나는 Point 구조체의 멤버 함수이다" << std::endl;
	std::cout << x*y << std::endl;
}
