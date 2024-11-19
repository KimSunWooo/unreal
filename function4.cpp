#include<iostream>
/*
함수를 호출하면 그 함수가 있는 메모리 주소로가서 계산을 한 뒤 돌아온다.

[매크로 함수]
ㄴ함수의 개념이아니라 문자열로 치환해주는 개념이다.
ㄴ디버깅이 힘들다.
ㄴ괄호 하나에 의해 결과가 이상하게 도출될 수 있다
ㄴ텍스트로 치환해 주는 것이기 때문에 타입에 대한 안정성이 보장이되지 않는다.
*/

inline int Sum(int a, int b) {
	return a + b;
}

int FindMaxNum(int a, int b) {
	if (a > b) {
		std::cout << a << "가 더 큽니다" << std::endl;
		return a;
	}
	else if (a == b) {
		std::cout << "두 숫자의 크기가 동일합니다." << std::endl;
		return a;
	}
	else {
		std::cout << b << "가 더 큽니다" << std::endl;
		return b;
	}
}

int isPrime(int a) {
	if (a == 2 || a == 3) {
		std::cout << a << "는 소수 입니다." << std::endl;
	} else {
		for (int i = 2; i < a/2; i++) {
			if (a % i == 0) {
				std::cout << a << "는 소수가 아닙니다." << std::endl;
				return 0;
			}
			
		}
		return 1;
	}
}

int Attack(int playerType, int targetHp) {
	switch (playerType)
	{
	case 1:
		std::cout << "현재 고블린의 HP는" << targetHp << " 입니다." << std::endl;
		std::cout << "플레이어가 고블린을 공격했다." << std::endl;
		break;
	case 2:
		std::cout << "현재 플레이어의 HP는" << targetHp << " 입니다." << std::endl;
		std::cout << "고블린이 플레이어를 공격했다." << std::endl;
		break;
	default: std::cout << "잘못된 접근입니다." << std::endl;
	}
	return targetHp;
}


int main() {
	int player = 1;
	int playerHp = 50;
	int target = 2;
	int targetHp = 100;
	Attack(player, targetHp);
	std::cout << "///////////////////////////" << std::endl;
	Attack(target, playerHp);
	std::cout << "///////////////////////////" << std::endl;
	FindMaxNum(10, 7);
	std::cout << "///////////////////////////" << std::endl;
	isPrime(2147483645);
	isPrime(2);
	isPrime(3);
	// a = 1 + 2
	// inline 으로 쓰면 함수 자체를 복사해서 갖다 씀. 시간적인 측면에서 이득이될 순 있음.
	// 함수 호출 규약 확인 

	// 오늘 과제
	/*
	* 1)
	- 플레이어가 있다
	- 고블린이 있다.
	- Attak 이라는 함수를 만들고(매개변수는 2개)
	- 첫 번째 매개변수는 플레이어를 나타내는 정수타입, 두 번째 매개변수는 타겟이 되는 HP
	- 리턴 타입은 int 리턴되는 값은 타겟의 HP

	2)
	- 입력받은 두 숫자 중 큰 숫자를 리턴하는 함수를만들어라.
	3)
	- 숫자를 입력받고 그 숫자까지의 합을 구하는 함수를 만들어라
	*/
}