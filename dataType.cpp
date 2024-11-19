/*
* 자료형 (datatype)
* - 자료의 형태를 지정
* - 데이터가 메모리에 저장되는 형태와 처리되는 방식을 명시하는 역할.
* - 0, 1 로만 구성된 컴퓨더에게 여러 형태의 자료를 저장하기 위함.
* 
* 
* /////////////////////////////////////////////////////
* 과제 : 자료형에 대해 조사 하세용.
* 자료형 이름       형태       크기(byte)       범위
* -논리형 
*  bool             논리       1                true, false
* 
* -정수형
* short
* int
* long
* unsinged short
* unsigned int
* 
* -실수형
* float                        4
* double                       8
* 
* -문자형
* char
* string
* /////////////////////////////////////////////////////
*/

// 변수 : 값을 저장할 수 있는 메모리 공간에 붙여진 이름.
// 변수를 선언하면 메모리공간이 할당되도, 할당된 메모리공간에 이름이 붙는다.
// 변수의 이름을 통해 할당된 메모리 공간에 접근이 가능해진다.
// 값을 저장할 수도 있고 이에 저장된 값을 참조할 수도 있다.
// 변수이름 지을 때. 나름 규칙이 있음 
// - 변수 이름은 알파벳, 숫자, _ (언더스코어) 로 구성할 수 있다.
// - 대소문자를 구별한다
// - 변수이름이 숫자로 시작될 순 없다. 키워드도 변수로 지정할 수 없다. ex) int, string 등
// - 공백이 포함될 수 없다.
// - 특수문자 사용 불가능
// - 영어로 짓자.
// - 반드시 의미있는 이름으로 지을 것.

#include<iostream>

int main() {
	std::cout << "int 형 크기" << sizeof(int) << std::endl;
	std::cout << "double 형 크기" << sizeof(double) << std::endl;

	
	int num = 3.14;
	std::cout << num << std::endl;


	int number;
	number = 19;
	std::cout << number << std::endl;

	int playerNumber;
	playerNumber = 30;
}