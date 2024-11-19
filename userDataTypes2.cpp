/******************
[열거형]
- 상수 집합에 이름을 붙여서 사용하는 데이터 타입
- 기본적으로 int 타입으로 처리되며 자동으로 0부터 시작하여 1씩 증가
- 명시적으로 값을 지정할 수 있다.
******************/

#include<iostream>
#include <cmath>

// 구 방식 (c++11 이전)
//enum Color
//{
//	// 0    1    2
//	Red, Green, Black
//};

enum class Location
{
	Inven,
	Town,
	Shop
};

enum class Charactor
{
	Knight = 1,
	Mage,
	Archor,
	None
};

enum Diretion
{
	Left =1,
	Right,
	Up = 5,
	Down
};

//리턴타입이 열거형인 함수?

Charactor getCharactor(int n) {
	switch (n)
	{
	case 1: return Charactor::Knight;
	case 2: return Charactor::Mage;
	case 3: return Charactor::Archor;
	default:
		return Charactor::None;
	}
}

// 실습?
	// 1. 좌표를 나타내는 구조체를 정의한다.
	struct Point
	{
		double x;
		double y;
	};
	
	// 2. 두 점 사이의 거리를 계산하는 함수를 작성한다.
	double CalDistance(const Point& p1, const Point& p2) {
		double result = std::sqrt(std::pow((p2.x - p1.x), 2) + std::pow((p2.y - p1.y), 2));
		std::cout << result << std::endl;
		return result;
	}

	// 3. 두개의 좌표를 생성하고 함수를 호출하여 두 점 사이의 거리를 계산(출력)

int main() {
	int Red = 0;
	int Green = 1;
	int Black = 2;

	// 범위기반 열거형
	// Location loc = Inven;

	Location loc = Location::Inven;

	//int dirSelect;
	//std::cin >> dirSelect;

	//switch (dirSelect)
	//{
	//case Diretion::Left: std::cout << "왼쪽 ㅌㅌ" << std::endl;
	//	break;
	//case Diretion::Right: std::cout << "오른쪽 ㅌㅌ" << std::endl;
	//	break;
	//case Diretion::Up: std::cout << "위쪽 ㅌㅌ" << std::endl;
	//	break;
	//case Diretion::Down: std::cout << "아래쪽 ㅌㅌ" << std::endl;
	//	break;
	//}

	//// 

	//int charactorSelect;
	//std::cin >> charactorSelect;

	//// 열거형 클래스를 사용ㅇ하게 되면 형변환을 해주어야 한다.
	//Charactor selectedCharactor = static_cast<Charactor>(charactorSelect);
	//switch (selectedCharactor)
	//{
	//case Charactor::Knight:
	//	break;
	//case Charactor::Mage:
	//	break;
	//case Charactor::Archor:
	//	break;
	//case Charactor::None:
	//	break;
	//default:
	//	break;
	//}

	Point p1 = {5, 7};
	Point p2 = {8, 2};

	CalDistance(p1, p2);
	
}