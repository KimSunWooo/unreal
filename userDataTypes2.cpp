/******************
[������]
- ��� ���տ� �̸��� �ٿ��� ����ϴ� ������ Ÿ��
- �⺻������ int Ÿ������ ó���Ǹ� �ڵ����� 0���� �����Ͽ� 1�� ����
- ��������� ���� ������ �� �ִ�.
******************/

#include<iostream>
#include <cmath>

// �� ��� (c++11 ����)
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

//����Ÿ���� �������� �Լ�?

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

// �ǽ�?
	// 1. ��ǥ�� ��Ÿ���� ����ü�� �����Ѵ�.
	struct Point
	{
		double x;
		double y;
	};
	
	// 2. �� �� ������ �Ÿ��� ����ϴ� �Լ��� �ۼ��Ѵ�.
	double CalDistance(const Point& p1, const Point& p2) {
		double result = std::sqrt(std::pow((p2.x - p1.x), 2) + std::pow((p2.y - p1.y), 2));
		std::cout << result << std::endl;
		return result;
	}

	// 3. �ΰ��� ��ǥ�� �����ϰ� �Լ��� ȣ���Ͽ� �� �� ������ �Ÿ��� ���(���)

int main() {
	int Red = 0;
	int Green = 1;
	int Black = 2;

	// ������� ������
	// Location loc = Inven;

	Location loc = Location::Inven;

	//int dirSelect;
	//std::cin >> dirSelect;

	//switch (dirSelect)
	//{
	//case Diretion::Left: std::cout << "���� ����" << std::endl;
	//	break;
	//case Diretion::Right: std::cout << "������ ����" << std::endl;
	//	break;
	//case Diretion::Up: std::cout << "���� ����" << std::endl;
	//	break;
	//case Diretion::Down: std::cout << "�Ʒ��� ����" << std::endl;
	//	break;
	//}

	//// 

	//int charactorSelect;
	//std::cin >> charactorSelect;

	//// ������ Ŭ������ ��뤷�ϰ� �Ǹ� ����ȯ�� ���־�� �Ѵ�.
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