/******
switch 문
- 여러가지 조건을 처리해야할 때 사용하는 조건문 중 하나
- 주로 상수값을 기준으로 분기할 때 사용한다.가독성이 좋다.

[switch]
- 하나의 변수를 검사하고 그 변수의 값에 따라 여러 case블록 중 하나를 실행
- break키워드를 통해 각 case의 실행을 종료
- break가 없으면 다음 case 블록이 연속해서 실행 됨.
- 표현식에는 문자, 정수, 열거타입 등이 있다.

[요약]
- 상수 값을 기준으로 여러 선택지 중 하나를 선택하는 상황에서 사용하기 좋다.
- 코드의 가독성을 높이고 효율성을 개선할 수는 있지만 표현식의 제한이 있다.
- 범위기반 비교는 불가 (10 < x < 20 등)
- if문은 범용적으로 다양한 조건을 다루기에 유용, 논리연산자를 사용하여 복잡한 조건을 다룰 수 있다.

[break]
반복문이나 스위를 제어할 때 사용.
******/

#include<iostream>
int main() {
	//int a;

	//std::cout << "게임을 선택하세요" << std::endl;
	//std::cout << "1. 롤" << std::endl;
	//std::cout << "2. 디아블로2" << std::endl;
	//std::cout << "3. 발로란트" << std::endl;
	//std::cout << "4. 스타크래프트" << std::endl;
	//std::cout << "5. 오버워치" << std::endl;

	//std::cin >> a;

	//switch (a)
	//{
	//case 1 : 
	//	std::cout << "롤 선택" << std::endl;
	//	break;
	//case 2:
	//	std::cout << "디아블로2 선택" << std::endl;
	//	break;
	//case 3:
	//	std::cout << "발로란트 선택" << std::endl;
	//	break;
	//case 4:
	//	std::cout << "스타크래프트 선택" << std::endl;
	//	break;
	//case 5:
	//	std::cout << "오버워치 선택" << std::endl;
	//	break;
	//default: std::cout << "입력값이 잘못 됨." << std::endl;
	//	break;
	//}

	//int jobChoice;
	//int skillChoice;

	//std::cout << "직업을 선택하시오 : " << std::endl;

	//std::cin >> jobChoice;

	//switch (jobChoice)
	//{
	//case 1 : std::cout << "전사" << std::endl;
	//	std::cout << "스킬 선택하시오 : " << std::endl;

	//	std::cin >> skillChoice;
	//	switch (skillChoice)
	//	{
	//	case 1 : std::cout << "대쉬" << std::endl;
	//		break;
	//	case 2 : std::cout << "찌르기" << std::endl;
	//		break;
	//	case 3 : std::cout << "체력증가" << std::endl;
	//		break;

	//	default:
	//		break;
	//	}
	//	break;
	//case 2 : std::cout << "마법사" << std::endl;
	//	std::cout << "스킬 선택하시오 : " << std::endl;

	//	std::cin >> skillChoice;
	//	switch (skillChoice)
	//	{
	//	case 1: std::cout << "텔포" << std::endl;
	//		break;
	//	case 2: std::cout << "메테오" << std::endl;
	//		break;
	//	case 3: std::cout << "마나증가" << std::endl;
	//		break;

	//	default:
	//		break;
	//	}
	//	break;
	//case 3 : std::cout << "궁수" << std::endl;
	//	std::cout << "스킬 선택하시오 : " << std::endl;

	//	std::cin >> skillChoice;
	//	switch (skillChoice)
	//	{
	//	case 1: std::cout << "은신" << std::endl;
	//		break;
	//	case 2: std::cout << "속사" << std::endl;
	//		break;
	//	case 3: std::cout << "스나이핑" << std::endl;
	//		break;

	//	default:
	//		break;
	//	}
	//	break;
	//default:
	//	break;
	//}

	//과제 2 두 정수를 입력 받는다. 
	// 2.1.두 정수의 사칙연산을 하는 프로그램을 작성한다.
	// 2.2 입력받은 두 정수에서 첫번째 입력받은 값이 크다면 +, 두번 째 값이 더 크다면 -
	//과제 3 내가 좋아하는 게임을 고른다.
	// if문으로 한개 switch문으로 한개
	// 게임을 선택 했다면 그 게임의 캐릭터를 선택해서 출력한다.
	// ex) 

	//2.1
	int fNum;
	int sNum;
	std::cout << "첫번 째 정수를 입력하세요" << std::endl;
	std::cin >> fNum;
	std::cout << "두번 째 정수를 입력하세요" << std::endl;
	std::cin >> sNum;

	if (fNum > sNum) {
		std::cout << "첫 번째 정수가 더 크므로 + 연산을 시행합니다. 결과값은 : " << fNum + sNum << " 입니다" << std::endl;
	}
	else {
		std::cout << "두 번째 정수가 더 크므로 - 연산을 시행합니다. 결과값은 : " << fNum - sNum << " 입니다" << std::endl;
	}

	//3.1
	int gNum1;
	int cNum1;

	std::cout << "if 문을 활용한 3번 과제 입니다." << std::endl;
	std::cout << "좋아하는 게임을 입력하시오" << std::endl << "1. 롤" << std::endl << "2. 스타" << std::endl << "3. 옵치" << std::endl;
	std::cin >> gNum1;
	if (gNum1 == 1) {
		std::cout << "좋아하는 게임은 롤 입니다." << std::endl;
		std::cout << "좋아하는 캐릭터의 번호를 입력하시오" << std::endl << "1. 니코" << std::endl << "2. 다이애나" << std::endl << "3. 신 짜오" << std::endl;
		std::cin >> cNum1;
		if (cNum1 == 1) {
			std::cout << "내가 좋아하는 게임은 롤 이고 좋아하는 캐릭터는" << "니코" << "입니다." << std::endl;
		}
		else if (cNum1 == 2) {
			std::cout << "내가 좋아하는 게임은 롤 이고 좋아하는 캐릭터는" << "다이애나" << "입니다." << std::endl;
		}
		else if (cNum1 == 3) {
			std::cout << "내가 좋아하는 게임은 롤 이고 좋아하는 캐릭터는" << "신 짜오" << "입니다." << std::endl;
		}
		else {
			std::cout << "잘못된 입력입니다." << std::endl;
		}

	} else if (gNum1 == 2) {
		std::cout << "좋아하는 게임은 스타 입니다." << std::endl;
		std::cout << "좋아하는 종족의 번호를 입력하시오" << std::endl << "1. 테란" << std::endl << "2. 프로토스" << std::endl << "3. 저그" << std::endl;
		std::cin >> cNum1;
		if (cNum1 == 1) {
			std::cout << "내가 좋아하는 게임은 스타 이고 좋아하는 종족은" << "테란" << "입니다." << std::endl;
		}
		else if (cNum1 == 2) {
			std::cout << "내가 좋아하는 게임은 스타 이고 좋아하는 종족은" << "프로토스" << "입니다." << std::endl;
		}
		else if (cNum1 == 3) {
			std::cout << "내가 좋아하는 게임은 스타 이고 좋아하는 종족은" << "저그" << "입니다." << std::endl;
		}
		else {
			std::cout << "잘못된 입력입니다." << std::endl;
		}

	} else if (gNum1 == 3) {
		std::cout << "좋아하는 게임은 옵치 입니다." << std::endl;
		std::cout << "좋아하는 캐릭터의 번호를 입력하시오" << std::endl << "1. 메르시" << std::endl << "2. 아나" << std::endl << "3. 한조" << std::endl;
		std::cin >> cNum1;
		if (cNum1 == 1) {
			std::cout << "내가 좋아하는 게임은 옵치 이고 좋아하는 캐릭터는" << "메르시" << "입니다." << std::endl;
		}
		else if (cNum1 == 2) {
			std::cout << "내가 좋아하는 게임은 옵치 이고 좋아하는 캐릭터는" << "아나" << "입니다." << std::endl;
		}
		else if (cNum1 == 3) {
			std::cout << "내가 좋아하는 게임은 옵치 이고 좋아하는 캐릭터는" << "한조" << "입니다." << std::endl;
		}
		else {
			std::cout << "잘못된 입력입니다." << std::endl;
		}
	}
	else {
		std::cout << "잘못된 입력입니다." << std::endl;
	}

	//3.2
	int gNum2;
	int cNum2;

	std::cout << "switch문을 활용한 3번 과제 입니다." << std::endl;
	std::cout << "좋아하는 게임의 번호를 입력하시오" << std::endl << "1. 롤" << std::endl << "2. 스타" << std::endl << "3. 옵치" << std::endl;
	std::cin >> gNum2;
	switch (gNum2)

	{
		case 1 :
			std::cout << "좋아하는 캐릭터의 번호를 입력하시오" << std::endl << "1. 니코" << std::endl << "2. 다이애나" << std::endl << "3. 신 짜오" << std::endl;
			std::cin >> cNum2;
			switch (cNum2) {
				case 1: std::cout << "좋아하는 게임은 롤 이고 좋아하는 캐릭터는 니코 입니다." << std::endl;
					break;
				case 2 : std::cout << "좋아하는 게임은 롤 이고 좋아하는 캐릭터는 다이애나 입니다." << std::endl;
					break;
				case 3 : std::cout << "좋아하는 게임은 롤 이고 좋아하는 캐릭터는 신 짜오 입니다." << std::endl;
					break;
				default:
					break;
			}
			break;
		case 2 :
			std::cout << "좋아하는 종족의 번호를 입력하시오" << std::endl << "1. 테란" << std::endl << "2. 프로토스" << std::endl << "3. 저그" << std::endl;
			std::cin >> cNum2;
			switch (cNum2) {
			case 1: std::cout << "좋아하는 게임은 스타 이고 좋아하는 종족은 테란 입니다." << std::endl;
				break;
			case 2: std::cout << "좋아하는 게임은 스타 이고 좋아하는 종족은 프로토스 입니다." << std::endl;
				break;
			case 3: std::cout << "좋아하는 게임은 스타 이고 좋아하는 종족은 저그 입니다." << std::endl;
				break;
			default:
				break;
			}
			break;
		case 3 :
			std::cout << "좋아하는 캐릭터의 번호를 입력하시오" << std::endl << "1. 메르시" << std::endl << "2. 아나" << std::endl << "3. 한조" << std::endl;
			std::cin >> cNum2;
			switch (cNum2) {
			case 1: std::cout << "좋아하는 게임은 옵치 이고 좋아하는 캐릭터는 메르시 입니다." << std::endl;
				break;
			case 2: std::cout << "좋아하는 게임은 옵치 이고 좋아하는 캐릭터는 아나 입니다." << std::endl;
				break;
			case 3: std::cout << "좋아하는 게임은 옵치 이고 좋아하는 캐릭터는 한조 입니다." << std::endl;
				break;
			default:
				break;
			}
			break;
	default:
		break;
	}

	std::cout << "끝 입니다." << std::endl;
} 