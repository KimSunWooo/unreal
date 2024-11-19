/*****
- while문
ㄴ조건이 참인 동안 계속 반복되는 구문
ㄴ일반적으로 반복횟수가 미리 정해지지 않았거나 특정조건을 만족할 때까지 반복해야하는 경우 사용


-기본구조-
while (true)
	{
		조건이 만족하면 해당 코드블록이 실행.
		종료조건이 있어야만 while문이 종료.
	}


[do-while]
ㄴ조건이 참인지 여부에 관계없이 최소 한번은 실행돼야할 때 사용.
	do {
		// 실행 할 코드
	} while (조건);
*****/

#include<iostream>

int main() {
	
		//int num = 0;

		//while (num < 10)
		//{
		//	num++;
		//	std::cout << num << std::endl;
		//}

		//int sum = 0;
		//int num2 = 0;

		//while (num < 10)
		//{
		//	num++;
		//	sum += num;
		//	std::cout << num << std::endl;
		//	if (sum > 100) break;

		//}

		//// 1. while 문을 이용한 입력한 숫자만큼 출력
		//std::cout << "숫자를 입력하라.";
		//int inputNum;
		//std::cin >> inputNum;
		//int count = 0;
		//while (count < inputNum) {
		//	std::cout << "숫자를 입력한 만큼 실행.  ";
		//	count++;
		//}
		//
		//// 2. 입력을 계속해서 받고 0이 입력되면 모든 수를 더하고 루프를 종료한다.

		//int iNum = 1;
		//int total = 0;

		//while (iNum != 0) {
		//	std::cout << "숫자를 입력해라, 0이 입력되면 종료." << std::endl;

		//	std::cin >> iNum;
		//	total += iNum;

		//	std::cout << total << std::endl;
		//}

	//int inputNum = 0;
	//int total = 0;

	//do {
	//	std::cout << "0 보다 큰 숫자를 입력해라." << std::endl;
	//	std::cin >> inputNum;
	//	total += inputNum;
	//} while (inputNum != 0);

	//int i = 0;

	//std::cout << "while 문 시작 : " << std::endl;
	//while (i > 0) {
	//	std::cout << "이 메시지는 출력되지 않습니다." << std::endl;
	//}

	//do {
	//	std::cout << "이 메시지는 최소 한번 출력됩니다." << std::endl;
	//} while (i > 0);
	srand(time(NULL));
	int random = rand() % 3;
	

	std::cout << random << std::endl;

	// 2번째 과제
	// 가위 바위 보 구현하기

	// 플레이어 - 가위 바위 보 를 입력받는다.
	// 컴퓨터 - 랜덤하게 가위 바위 보 중 하나를 냄.

	// 결과를 출력함. 

	// 종료조건 : 10판 진행하기
}