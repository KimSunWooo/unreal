#include<iostream>
/*
	연산자 (operator)

	1. 산술 연산자
	+ : 두 값을 더한다.
	- : 두 값에서 한 값을 뺀다.
	* : 두값을 곱한다.
	/ : 첫번째 값을 두번째 값으로 나눈다.
	% : 첫번째 값에서 두번째 값을 나눈 나머지를 반환한다.

	2. 증감 연산자 피연산자의 값을 1증가 또는 1 감소 시킨다. 전위와 후위로 구분됨
	++a : 선 증가 후 연산한다. (증가 먼저 시킨 후 연산)
	a++ : 선 연산 후 증가한다. (연산 먼저 한 후 증가)
	--a : 선 감소 후 연산. (감소 먼저 시킨 후 연산)
	a-- : 선 연산 후 감소. (연산 먼저 한 후 감소)
	ㄴ증감 연산자의 위치가 변수앞에 있으면 전위, 뒤에있으면 후위

	잘 쓰면 편안
	ex) num++, num = num + 1 동일함.

	3. 관계 연산자
	> : a > b >>>>> 피연산자 a 가 피연산자 b 보다 크다
	< : a < b >>>>> 피연산자 a 가 피연산자 b 보다 작다
	>= : a >= b >>>>> 피연산자 a 가 피연산자 b보다 크거나 같다
	<= : a <= b >>>>> 피연산자 a 가 피연산자 b보다 작거나 같다
	== : a == b >>>>> 피연산자 a 가 피연산자 b와 같다.
	!= : a != b >>>>> 피연산자 a 가 피연산자 b와 같지않다.

	4. 논리 연산자
	&& : and 개념, a && b : a와 b 모두 참일 때 1 (true) 반환
	|| : or 개념, a || b : a와 b 중 하나라도 참일 때 1 (true) 반환
	! : 부정. 피연산자가 참이면 거짓, 거짓이면 참.
	5. 비트 연산자 
	ㄴ데이터를 비트단위로 처리하는 연산자. 하드웨어와 밀접하게 관련된 각종 처리를 쉽게 해준다
	ㄴ메모리 공간을 줄여서 성능을 높여준다.
	ㄴ컴퓨터는 0, 1로 처리한다. 

	**비트는 2진수 값 하나를 저장할 수 있는 최소 저장단위(메모리 공간)를 의미.
	* 1비트로 표현할 수 있는 데이터 수는 1, 0 
	* 2비트는 00, 01, 10, 11 > 4개, 3비트는 2^3 8개
	* 1바이트는 8비트, 256가지 경우의 수를 표현할 수 있는 저장용량을 가진다.
		- 2진수 : 0, 1 사용
		- 10진수 : 0 ~ 10 까지 숫자를 사용
		- 16진수 : 0 ~ 9 까지의 숫자와 a, b, c, d, e, f까지의 문자를 사용
			ㄴ16진수에서 a는 정수 10을 의미 b는 11 ... f는 15 를 의미
		- 8진수 : 0 ~ 7 까지의 숫자를 사용

	& : a & b // 비트단위 AND 연산 -> 두개의 비트가 모두 1일때 1을 반환
	| : a | b // 비트단위 or 연산 -> 두개의 비트 중 하나가 1일 때 1을 반환
	^ : a ^ b // 비트단위 xor 연산 -> 두개의 비트가 서로 같지 않을경우 1을 반환
	~ : ~a -> // 비트단위 not 연산 -> 보수연산이라고도 하며 비트를 반전시킴.
	<< : a << 3 // 왼쪽으로 비트를 세칸 이동 -> 비트를 이동시킴
	>> : a >> 3 // 오른쪽으로 비트를 세칸 이동 -> 비트를 이동
	ㄴ 비트를 오른쪽 또는 왼쪽 으로 옮기면 각각  2배, 1/2 배가 된다.

	6. 복합대입 연산자 (축약형)
	+= : a += b
	-= : a -= b
	*= : a *= b
	/= : a /= b
	&= : a &= b
	|= : a |= b
	^= : a ^= b
	<<= : a <<= b
	>>= : a >>= b

	7. 조건연산자 (삼항연산자)
	ㄴ연산자가 두개 와 피연산자 세개로 이루어지는 삼항연산자
	a ? b : c
	a가 참이면 결과값이 b, a가 거짓이면 결과값이 c 를 반환 함 

	중첩해서 사용하는 것은 지양. 가독성 떨어짐

 	*/

int main() {
	int a = 10;
	int b = 3;
	std::cout << "산술 연산자" << std::endl;
	std::cout << 1 + 2 << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a % b << std::endl;

	std::cout << "증감 연산자" << std::endl;
	int num = 10;
	std::cout << "num에 저장되어 있는 값" << num << std::endl;
	num++;
	std::cout << "num++ 후 저장되어 있는 값 : " << num << std::endl;
	++num;
	std::cout << "++num 후 저장되어 있는 값 : " << num << std::endl;
	num--;
	std::cout << "num-- 후 저장되어 있는 값 : " << num << std::endl;
	--num;
	std::cout << "--num 후 저장되어 있는 값 : " << num << std::endl;

	int num1 = 10;
	int num2 = 20;

	int c;
	int d;

	c = ++num1; //전위 방식, 선 증가 후 연산

	std::cout << "변수 c의 값" << c << "," << "변수 num1의 값 : " << num1 << std::endl;

	d = num2++;

	std::cout << "변수 d의 값" << d << "," << "변수 num1의 값 : " << num2 << std::endl;

	std::cout << "관계연산자" << std::endl;

	int num3 = 1;
	int num4 = 2;

	int result;
	int result1;
	int result2;
	int result3;

	result = (num3 > num4);
	result1 = (num3 <= num4);
	result2 = (num3 == num4);
	result3 = (num3 != num4);

	std::cout << "result 변수에 저장된 값" << result << std::endl;
	std::cout << "result1 변수에 저장된 값" << result1 << std::endl;
	std::cout << "result2 변수에 저장된 값" << result2 << std::endl;
	std::cout << "result3 변수에 저장된 값" << result3 << std::endl;

	//논리연산자

	int num5 = 3;
	int num6 = 5;
	std::cout << "논리연산자" << std::endl;

	int result4;
	int result5;
	int result6;

	result4 = (num5 > 0) && (num6 < 10);
	result5 = (num5 <= 2) || (num6 > 5);
	result6 = !num6;

	std::cout << "result4 의 결과 : " << result4 << std::endl;
	std::cout << "result5 의 결과 : " << result5 << std::endl;
	std::cout << "result6 의 결과 : " << result6 << std::endl;

	std::cout << "비트 연산자" << std::endl;

	int bitNum1 = 20;
	int bitNum2 = 16;

	int bitRes1 = bitNum1 & bitNum2;
	int bitRes2 = bitNum1 | bitNum2;
	std::cout << "비트 연산자 & 결과" << bitRes1 << std::endl;
	std::cout << "비트 연산자 | 결과" << bitRes2 << std::endl;

	int shiftNum = 10;
	int shiftRes = shiftNum << 2;
	std::cout << "비트 연산자 << 결과" << shiftRes << std::endl;

	shiftRes = shiftRes >> 1;
	std::cout << "비트 연산자 >> 결과" << shiftRes << std::endl;

	int x = 5;
	int y = 3;

	x += y;
	std::cout << x << std::endl;

	x += 2;
	std::cout << x << std::endl;

	x += 3;
	std::cout << x << std::endl;

	int number1 = 2;
	int number2 = 3;

	int numberResult;

	numberResult = (number1 > number2) ? number1 : number2;
	std::cout << "삼항 연산자의 결과" << numberResult << std::endl;
	return 0;
}

