#include<iostream>
/******
분기 (조건문, if문)
- 조건문이라고도 하며 프로그램의 실행흐름을 제어하는데에 사용된다.
- 주어진 조건이 참인지 거짓인지에 따라 코드 블록을 실행하게 한다.

if(조건절) {
	코드1
}

- 조건절이 참이면 안쪽의 코드블록 실행. 아니면 스킵
- if문의 제한은 딱히 없지만 가능한 한 줄이는게 좋다.

[else]
단독으로는 올 수 없다.

[else if]
if(조건 1) {
	조건 1이 참
}
else if(조건 2){
	조건 1이 거짓이고 조건 2가 참
}
else {
	조건1, 2가 모두 거짓일 때.
}
******/

int main() {
	//if (true /* 조건절*/) {
	//	std::cout << "여긴 조건문이 참일 때 코드블록" << std :: endl;
	//}
	//else if (false /* 또 다른 조건절*/) {
	//	std::cout << "위에 있는 if문의 조건에 부합하지 않고, 해당조건을 만족하는 경우 실행되는 코드블록" << std::endl;
	//}
	//else {
	//	std::cout << "여긴 아무 조건에도 해당되지 않을 때 코드블록" << std::endl;
	//}

	//if (true /*조건절1*/) {
	//}
	//if (false /*조건절2*/) {
	//}
	//else {
	//	std::cout << "바로위의 조건절 (조건절 2)이 참이면 여기가 실행" << std::endl;
	//}

	//int number;
	//std::cout << "정수 입력" << std::endl;

	//std::cout << "정수를 입력하시오 : ";
	//std::cin >> number;

	//if (number > 0) {
	//	std::cout << "0보다 클 때" << std::endl;
	//}
	//else {
	//	std::cout << "0보다 작을 때" << std::endl;
	//}

	//std::cout << "점수를 입력 해보시오 : " << std::endl;
	//int score;

	//std::cin >> score;

	//if (score > 90) {
	//	std::cout << "A" << std::endl;
	//}
	//else if (90 > score > 80) {
	//	std::cout << "B" << std::endl;
	//}
	//else if (80 > score > 70) {
	//	std::cout << "C" << std::endl;
	//}
	//else if (70 > score > 60) {
	//	std::cout << "D" << std::endl;
	//}
	//else {
	//	std::cout << "F" << std::endl;
	//}

	// 실습 1
	// 입력을 받는다. (정수를 입력 받는다.)

	// 3 ~ 5월은 봄
	// 6 ~ 8월은 여름
	// 9 ~ 11 월은 가을
	// 12 ~ 2월은 겨울

	std::cout << "숫자를 입력하시오" << std::endl;
	int month;
	std::cin >> month;
	std::cout << month << std::endl;

	if (2 < month && month <= 5) {
		std::cout << "1" << std::endl;
		std::cout << "봄" << std::endl;
	}
	else if (5 < month && month <= 8) {
		std::cout << "2" << std::endl;
		std::cout << "여름" << std::endl;
	}
	else if (8 < month && month <= 11) {
		std::cout << "3" << std::endl;
		std::cout << "가을" << std::endl;
	}
	else if (month == 12 || 1 <= month < 3) {
		std::cout << "4" << std::endl;
		std::cout << "겨울" << std::endl;
	}
	else {
		std::cout << "5" << std::endl;
		std::cout << "잘못된 값 입니다." << std::endl;
	}
}