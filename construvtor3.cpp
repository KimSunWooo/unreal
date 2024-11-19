/**************************
[소멸자]
 - 객체가 소멸될 떄 자동으로 소멸되는 함수
 - 매개변수가 없음
 - 반환값 없음
 - 오버로딩 불가능. (여러개의 소멸자를 정의할 수 없음)
**************************/
#include<iostream>
#include<string>
class MyClass
{
public:
	// 생성자
	MyClass(int size);
	// 소멸자
	~MyClass();

private:
	int* data;
};

// 생성
MyClass::MyClass(int size)
{
	data = new int[size];
	std::cout << "여긴 생성자" << std::endl;
}
// 소멸
MyClass::~MyClass()
{	
	delete[] data;
	data = nullptr;
	std::cout << "여긴 소멸자" << std::endl;
}
int main() {
	MyClass* m = new MyClass(10);
	delete m;
	m = nullptr;

}