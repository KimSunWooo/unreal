using namespace std;
#include<string>
#include<iostream>

class Unit
{
	
public:
	Unit(const string& n, const string& k, const int h, const int a, const int d) : health(h),kind(k), name(n), atk(a), def(d) {
		cout << kind << "����" << endl;
		cout << "�̸� : " << name << endl;
		cout << "ü�� : " << health << endl;
		cout << "���ݷ� : " << atk << endl;
		cout << "���� : " << def << endl;
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
		cout << "��ų" << skill.name
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
		cout << "�̰��� ��ų" << endl;
	};
	string name;
	int dmg;

private:

};




int main() {
	Monster* mop = new Monster("�����", "����", 50, 3, 5);
	Player* me = new Player("�� ĳ����", "�÷��̾�", 150, 10, 5);
}