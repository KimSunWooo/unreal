/*
[함수]
ㄴ 특정 작업을 수행하는 코드의 집합
ㄴ 코드의 안정성, 에러를 수정하기 쉽다
ㄴ 볼륨이 커지는 프로그랩일수록 수정, 유지보수가 쉽지 않기 때문에 기능별로 세분화 필요.
ㄴ 코드의 재사용성이 좋다.
ㄴ 함수 이름으로 어떤 기능을 하는지 유추할 수 있따.

[함수의 형태]
ㄴ 기본적으로 함수는 매개변수에 유무와 반환값의 유무에 따라 네개의 형태로 구분할 수 있다.
	- 매개변수와 반환값이 모두 있는 경우
	- 매개변수가 있고 반환값이 없는 경우
	- 매개변수가 없고 반환값이 있는 경우
	- 매개변수가 없고 반환값도 없는 경우

	int Sum(int x, int y) {
		int result;
		result = x + y;
		return result;
	};

	int : 반환 타입
	Sum : 함수이름
	(int x, int y) : 매개변수

	=> 매개변수 x, y 를 받아 Sum() 함수를 수행하고 int 형태로 결과값을 출력한다.
	=> 입력형태 : 입력형태로 설정된 변수를 매개변수,파라미터 라고 함, 둘 이상의 매개변수를 설정할 필요가 있을 때 콤마로 구분한다.
	=> 함수의 기능 : 해당 함수 내에서 입력변수 (매개변수 또는 파라미터) 를 더해 result에 저장하고 result를 반환.

	>>>>> 규모가 큰 프로젝트 에서는 보통 원형을 헤더파일에 선언해둔 뒤 cpp파일에서 구현하는 식 으로 진행 됨.
*/

#include<iostream>

// 1. 매개변수가 있고 반환값이 있는 경우
int Sum(int x, int y) {
	int result;
	result = x + y;
	return result;
};

// 2. 매개변수가 있고 반환값이 없는 경우
void Sum1(int x, int y) {
	int result;
	x + y;
	
};
// 3. 매개변수가 없고 반환값이 없는 경우
int ReadNum() {
	int num;
	std::cin >> num;
	return  num;

};

// 4. 매개변수가 없고 반환값이 없는 경우
void ReadNum2() {
	std::cout << "결과" << std::endl;

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

