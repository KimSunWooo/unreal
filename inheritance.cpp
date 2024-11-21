/*******************
[상속]

********************/
#include<iostream>
using namespace std;


#pragma region 상속을 사용하지 않았을 때
//class Warrior
//{
//public:
//	Warrior(const string& n, const int h) : name(n), health(h) {};
//	
//	void Attack() {
//		cout << "칼공격" << endl;
//	}
//	void TakeDamage(const int damage) {
//		health -= damage;
//		cout << name << "이" << damage << "만큼 데미지를 먹었다 남은 체력" << health << endl;
//	}
//
//private:
//	string name;
//	int health;
//};
//
//class Mage
//{
//public:
//	Mage(const string& n, const int h) : name(n), health(h) {};
//
//	void Attack() {
//		cout << "마법공격" << endl;
//	}
//	void TakeDamage(const int damage) {
//		health -= damage;
//		cout << name << "이" << damage << "만큼 데미지를 먹었다 남은 체력" << health << endl;
//	}
//
//private:
//	string name;
//	int health;
//};
//#pragma endregion
//
class Charactor
{

public:

	string name;
	int health;

	Charactor(const string& n, const int h) : name(n), health(h) {
		cout << "부모 클래스 chractor생성자 호출" << endl;
	};
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이" << damage << "만큼 데미지를 먹었다 남은 체력" << health << endl;
	}
private:
	void PrintPrivate() {
		cout << "여기는 부모 클래스의 private 영역" << endl;
	}

protected :
	void PrintProtected() {
		cout << "여기는 부모 클래스의 protected 영역" << endl;
	}
};

// 상속
class Warrior : public Charactor
{
public:
	Warrior(string n, const int h) : Charactor(n, h) {
		cout << "자식 클래스 워리어 생성자 호출" << endl;
	};

	void Attack() {
		cout << "칼공격" << endl;
	}
};

class Mage : public Charactor
{
public:
	Mage(const string n, const int h) : Charactor(n, h) {
		cout << "자식 클래스 메이지 생성자 호출" << endl;
	}

	void Skill() {
		cout << "소환" << endl;
	}
};



int main() {
	Warrior* w = new Warrior("토르", 100);
	w->Attack();
	w->TakeDamage(10);

	Mage* m = new Mage("간달프", 208);

	m->Skill();
}