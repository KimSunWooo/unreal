/*******************
[���]

********************/
#include<iostream>
using namespace std;


#pragma region ����� ������� �ʾ��� ��
//class Warrior
//{
//public:
//	Warrior(const string& n, const int h) : name(n), health(h) {};
//	
//	void Attack() {
//		cout << "Į����" << endl;
//	}
//	void TakeDamage(const int damage) {
//		health -= damage;
//		cout << name << "��" << damage << "��ŭ �������� �Ծ��� ���� ü��" << health << endl;
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
//		cout << "��������" << endl;
//	}
//	void TakeDamage(const int damage) {
//		health -= damage;
//		cout << name << "��" << damage << "��ŭ �������� �Ծ��� ���� ü��" << health << endl;
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
		cout << "�θ� Ŭ���� chractor������ ȣ��" << endl;
	};
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "��" << damage << "��ŭ �������� �Ծ��� ���� ü��" << health << endl;
	}
private:
	void PrintPrivate() {
		cout << "����� �θ� Ŭ������ private ����" << endl;
	}

protected :
	void PrintProtected() {
		cout << "����� �θ� Ŭ������ protected ����" << endl;
	}
};

// ���
class Warrior : public Charactor
{
public:
	Warrior(string n, const int h) : Charactor(n, h) {
		cout << "�ڽ� Ŭ���� ������ ������ ȣ��" << endl;
	};

	void Attack() {
		cout << "Į����" << endl;
	}
};

class Mage : public Charactor
{
public:
	Mage(const string n, const int h) : Charactor(n, h) {
		cout << "�ڽ� Ŭ���� ������ ������ ȣ��" << endl;
	}

	void Skill() {
		cout << "��ȯ" << endl;
	}
};



int main() {
	Warrior* w = new Warrior("�丣", 100);
	w->Attack();
	w->TakeDamage(10);

	Mage* m = new Mage("������", 208);

	m->Skill();
}