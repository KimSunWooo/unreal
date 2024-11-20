using namespace std;
#include<string>
#include<iostream>

class Unit
{
	
public:
	Unit(const string& n, const string& k, const int h, const int a, const int d) : health(h),kind(k), name(n), atk(a), def(d) {
		cout << kind << "정보" << endl;
		cout << "이름 : " << name << endl;
		cout << "체력 : " << health << endl;
		cout << "공격력 : " << atk << endl;
		cout << "방어력 : " << def << endl;
	}

private:
	int health;
	string name;
	string kind;
	int atk;
	int def;
};
class Monster : public Unit
{
public:
	Monster(const string n, const string k, int h, int a, int d) : Unit(n, k, h, a, d) {
		
	};
	void Attack(Skill skill) {
		cout << "스킬" << skill.name
	}
private:

};
class Player : public Unit
{
public:
	Player(const string n, const string k, int h, int a, int d) : Unit(n, k, h, a, d) {

	};
	

private:

};

class Skill
{
	
public:
	Skill(const string& n, const int d) : name(n), dmg(d) {
		cout << "이것은 ㅅ킬" << endl;
	};
	string name;
	int dmg;

private:

};




int main() {
	Monster* mop = new Monster("토꺵이", "몬스터", 50, 3, 5);
	Player* me = new Player("내 캐릭터", "플레이어", 150, 10, 5);
}