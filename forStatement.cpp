/*




*/
#include<iostream>
int main() {

	// 초기화; 조건; 증감;
	// 초기값 0 / i가 5보다 작을 때 까지 / i++

	//for (int i = 0; i < 5; i++) {
	//	std::cout << i << std::endl;
	//}

	//for (int i = 10; i > 0; i--) {
	//	std::cout << i << std::endl;
	//}

	//// for문에서도 break 사용 가능
	//// ex)

	//for (int i = 10; i > 0; i--) {
	//	if (i < 5) {
	//		break;
	//	}
	//	std::cout << i << std::endl;
	//}

	//for (int i = 0; i < 11; i++) {
	//	if (i % 2 == 0) {
	//		continue; // 이 시점 이후의 코드를 건너뛰고 다음 루프로 넘어감
	//	}
	//	std:: cout << i << std::endl;
	//}

	//// 3의 배수나 5의 배수를 검사하는 로직 (50까지)
	//for (int i = 1; i < 51; i++) {
	//	if (i % 3 == 0 || i % 5 == 0) {
	//		std::cout << i << "는 3 또는 5의 배수입니다." << std::endl;
	//	}
	//		
	//}
	//std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

	//// 1브터 100까지 합
	//int sum = 0;
	//for (int i = 0; i < 101; i++) {
	//	sum += i;
	//}
	//std::cout << sum << std::endl;

	//// for 문도 중첩 가능, 다중 for 문

	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		std::cout << "i 값 : " << i << "  j 값 : " << j << std::endl;
	//	}
	//}

	////간단 과제, 구구단

	//for (int i = 1; i < 10; i++) {
	//	for (int j = 1; j < 10; j++) {
	//		std::cout << i * j << std::endl;
	//	}
	//}

	////ex) 내가 입력한 숫자가 양수인지 검사
	//int numInput;
	//bool isPositive = true;

	//std::cout << "입력할 숫자의 개수" << std::endl;
	//std::cin >> numInput;

	//int number;
	//for (int i = 0; i < numInput; i++) {
	//	std::cout << i + 1 << " 번째 숫자를 입력해라.";
	//	std::cin >> number;

	//	if (number <= 0) {
	//		isPositive = !isPositive;
	//		break;
	//	}
	//}

	//if (isPositive) {
	//	std::cout << "+" << std::endl;
	//}
	//else {
	//	std::cout << "- or 0" << std::endl;
	//}

	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	//과제 : 별찍기 (ㅋ)

	
}