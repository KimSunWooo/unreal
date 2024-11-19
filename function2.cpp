#include<iostream>
/*
[변수의 존재기간과 접근 범위]
ㄴ 변수는 선언되는 위치에 따라 크게 전역변수와 지역변수로 나뉜다
ㄴ 메모리 상에 존재하는 기간과 접근할 수 있는 범위에 대한 차이점이 있다.


1. 지역변수 
	ㄴ 지역변수는 중괄호 내에 선언되는 변수는 모두 지역변수
	ㄴ 활동 영역은 변수가 선언된 블록에서만 유효하고 블록이 끝나면 지역변수는 메모리에서 사라진다.
2. 전역변수
	ㄴ 블록 외부에서 정의. 프로그램 전체에 접근 가능
	ㄴ 프로그램 시작 시 생성되고 프로그램 종료 시 소멸
	ㄴ 전역변수는 지양 해야 한다.
*/

int globalValue = 10;
void GlobalVariable() {
	std::cout << globalValue << " : 여기서도 접근할 수 있음" << std::endl;
}

void LocalVariable() {
	int num = 1;
	{
		num = 2;

		int num2 = 5;
	}
	// num2 는 여기서 접근되지 않는다.
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
	std::cout << "지역변수 num1 의 데이터 : " << num1 << std::endl;
	std::cout << "지역변수 num2 의 데이터 : " << num2 << std::endl;
}

int Sum(const int a, int b) {
	// 매개변수에 const 키워드가 붙으면 함수 내부에서 a값을 변경할 수 없다. 안정성 보장
}
int main() {
	// 함수 호출
	MyFunc1();
	MyFunc2();


}

int Add(int a, int b) {
	return a + b;
}
