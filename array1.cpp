#include<iostream>
/*
[배열 - array]
ㄴ 동일한 타입의 여러 값을 연속적으로 저장할 수 있는 데이터 구조
ㄴ 메모라에서 연속적인 공간을 가지고 각 요소는 인덱스를 통해 접근할 수 있다.
ㄴ 배열을 선언할 때 지정된 크기를 변경 할 수 없다.
ㄴ 배열의 모든 요소는 도일한 데이터 타입을 가져야 한다.
ㄴ 연속된 공간에 저장되기 떄문에 요소에 대한 인덱스 접근이 매우 빠르다.

[선언]

자료형 / 배열이름 / [배열의 길이];
ex) int arr[5];
*/
int main() {
	// 초기화 방법
	// 1. 크기를 명시하고 초기화
	int arr[4] = {1, 2, 3, 4};

	// 2. 배열의 크기를 생략하고 초괴화
	int arr2[] = { 1, 2, 3 }; // 크기는 3

	// 3. 크기를 명시적으로 지정하고 일부요소만 초기화.
	int arr3[5] = { 1, 2, 3 }; // 나머지는 0으로 초기화 { 1, 2, 3, 0, 0 };
	
	// 4. 모든요소를 초기화 하지 않으면 기본값으로 초기화.
	int arr4[5] = {};

	std::cout << arr[0] << std::endl;
	std::cout << arr2[1] << std::endl;
	std::cout << arr3[2] << std::endl;
	std::cout << arr4[3] << std::endl;

	int numbers[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i++) {
		std::cout << i << " 각 인덱스에 접근해 출력" << std::endl;
	}

	std::cout << arr << std::endl;
	std::cout << &arr[0] << std::endl;

	// 배열에 저장된 숫자를 찾아봅시다.
	int numArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int select;
	bool isFind = false;
	std::cin >> select;

	for (int i = 0; i < 10; i++) {
		if (numArr[i] == select) {
			isFind = true;
			break;
		}

		
	}
	if (isFind) {
		std::cout << "찾음" << std::endl;
	}
	else {
		std::cout << "없음" << std::endl;
	}

	//선언 및 초기화
	int numArr2[] = { 1, 2, 3, 4, 5 };
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += numArr2[i];
	}
	std::cout << "합계 : " << sum << std::endl;
} 