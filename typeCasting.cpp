/*
[형변환]
- 변수나 값을 한 데이터 타입에서 다른 데이터 타입으로 변환하는 작업.

 1. 암시적 (묵시적) 형변환
   - 컴파일러가 자동으로 자료형을 변환
   - 주로 작은 자료형이 큰 자료형으로 변환
   - 큰 자료형을 작은 자료형으로 변환은 가능하지만 데이터 손실이 발생할 가능성이 있음.

 2. 명시적 형변환
   - 사용자가 직접 형변환을 한다.
   
 [c 스타일 명시적 형변환]
 - 문법적으로 간단. 괄호 안에 원하는 데이터 타입을 명시하여 변수나 값을 변환
 - (target_type) value
 - (target_type) : 변환 하고싶은 데이터 타입
 - value : 변환 대상
 - 포인터, 기본형, 사용자 정의 타입 등 거의 모든 데이터 타입에 대해 적용가능
 - c++ 형변환 방식에 비해 어떤 변환이 이루어지는지 명확하지 않을 수 있음.
 - 잘못된 형변환으로인해 런타임 오류나 데이터 손실이 발생될 수 있다.

 [c++ 명시적 형변환]
 - 형변환을 더 안전하고 명확하게 하기위해 캐스트 연산자를 제공

 [c++ 캐스팅 종류]
 1. static_cast : 컴파일 타임에 타입을 변환하는데 사용. 주로 기본타입 간의 변환에 사용
   - 컴파일러가 변황이 가능한지 검사하기 때문에 잘못된 변환을 방지 할 수 있다.
   - UpCasting 때도 사용하긴한다.
   - 복잡한 상속구조에서 타입변환이 혼동을 줄 수 있을때 명시적으로 붙이는게 가독성에 도움이 될 수 있다.
  
 2. dynamic_cast : 런타임에 타입 변환 수행. 주로 DownCasting에 사용
   - 안정성을 보장하며 타입이 맞지 않는다면 nullptr을 반환시킴.
   - RTTI (Runtime Type Information)을 기반으로 작동

 3. const_cast : 객체의 상수성을 제거하거나 추가할 때.

 4. reinterpret_cast : 매우 강력하지만 잘못사용하면 상당한 위험을 초래함.
*/

#include<iostream>
int main() {
#pragma region 암시적 형변환

	int a = 1;
	double b = a;

#pragma endregion

#pragma region 명시적 형변환 (c)

	int iValue = 10;
	float fValue = (float)iValue;

	double dValue = 3.14;
	int iValue1 = (int) dValue;

	int value = 40;
	void* ptr = (void*)&value;

	// static_cast

	int intVal = 10;
	double doubleVal = static_cast<double>(intVal);

	std::cout << "static_cast 후" << doubleVal << std::endl;

	

#pragma endregion
}