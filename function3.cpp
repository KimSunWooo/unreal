#include<iostream>
/*
[함수 오버로딩]
ㄴ 동일한 함수 이름을 사용해서 매개변수의 타입, 갯수, 또는 순서를 다르게 표현하는 법.
ㄴ 비슷한 작업을 수행하는 여러함수가 있는 경우 각 함수에 다른 이름을 부여하는 것보다 
	함수 오버로딩을 사용하면 코드의 가독성이 향상되며 하나의 함수로 다양한 형태의 함수를 호출할 수 있다.

[함수 오버로딩 성립 조건]
1. 함수이름이 동일해야 한다.
2. 리턴 타입은 고려대상이 아니다.
3. 매개변수의 데이터 타입이 다르거나 갯수가 달라야한다.

* 면접 체크
* ㄴ 함수 오버로딩이 무엇?
* ㄴ 함수 오버로딩과 오버라이딩의 차이점은?
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
	std::cout << a << "와" << b << "를" << " 밑변과 높이로 가지는 사각형의 넓이는" << a * b << " 입니다." << std::endl;
	return a * b;
}

double circle(int a) {
	std::cout << "반지름이 " << a << "인 원의 넓이는" << a * a * 3.14 << " 입니다" << std::endl;
	return 0;
}
int main() {
	
	/*
	1. 더하기 빼기 곱하기 나누기 함수 만들어.
	- 오버로딩의 기능을 활용해서 정수형과 실수형.
	2. 사각형과 원의 면적을 계산하는 함수를 만들어라.
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