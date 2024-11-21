using namespace std;
#include<string>
#include<iostream>

class Skill
{

public:
	Skill(const string& n, const int d) : name(n), dmg(d) {
		cout << "�̰��� ��ų" << endl;
		cout << "�̸��� " << name << endl;
		cout << "�������� " << dmg << endl;
	};

	string& getSkillName() {
		return name;
	}

	int getSkillDmg() {
		return dmg;
	}

private:
	string name;
	int dmg;
};

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
	void Attack(Unit& target) {
		int damage = max(0, atk - target.def); // ���� ���
		cout << name << "��(��) �Ϲ� �������� " << target.name << "��(��) �����ߴ�." << endl;
		cout << target.name << "��(��) " << damage << "�� ���ظ� �Ծ���." << endl;
		target.TakeDamage(damage);
	}

	// ��ų ���� �޼���
	void AttackWithSkill(Skill& skill, Unit& target) {
		cout << name << "��(��) ��ų " << skill.getSkillName() << "�� " << target.name << "��(��) �����ߴ�." << endl;
		cout << target.name << "��(��) " << skill.getSkillDmg() << "�� ���ظ� �Ծ���." << endl;
		target.TakeDamage(skill.getSkillDmg());
	}

	// �������� �Դ� �޼���
	void TakeDamage(int damage) {
		health -= damage;
		if (health <= 0) {
			cout << name << "��(��) ���������ϴ�!" << endl;
		}
		else {
			cout << name << "�� ���� ü��: " << health << endl;
		}
	}

	void PrintPublic() {
		cout << "����� �θ� Ŭ������ public ����" << endl;
	}
	

protected:
	void PrintProtected() {
		cout << "����� �θ� Ŭ������ protected ����" << endl;
	}

private:
	int health;
	string name;
	string kind;
	int atk;
	int def;

	void PrintPrivate() {
		cout << "����� �θ� Ŭ������ private ����" << endl;
	}
};
class Monster : public Unit
{
	
public:
	Monster(const string n, const string k, int h, int a, int d) : Unit(n, k, h, a, d) {
		
	};
	
	
private:

};
class Player : public Unit
{
public:
	Player(const string n, const string k, int h, int a, int d) : Unit(n, k, h, a, d) {

	};
	

private:

};

class test1 : private Unit {
	public : 
	test1(const string n, const string k, int h, int a, int d) : Unit(n, k, h, a, d) {
		
	}

	void PrintPublic() {
		Unit::PrintPublic();
	}
	void PrintProtected() {
		Unit::PrintProtected();
	}
	void PrintPrivate() {
		Unit::PrintPrivate();
	}

	private :
		
};

class test2 : protected Unit {
	public : 
	test2(const string n, const string k, int h, int a, int d) : Unit(n, k, h, a, d) {

	}

	void PrintPublic() {
		Unit::PrintPublic();
	}
	void PrintProtected() {
		Unit::PrintProtected();
	}
	void PrintPrivate() {
		Unit::PrintPrivate();
	}
};

class test3 : public Unit {
public:
	test3(const string n, const string k, int h, int a, int d) : Unit(n, k, h, a, d) {

	}

	void PrintPublic() {
		Unit::PrintPublic();
	}
	void PrintProtected() {
		Unit::PrintProtected();
	}
	void PrintPrivate() {
		Unit::PrintPrivate();
	}
};





int main() {
	Monster* mop = new Monster("�����", "����", 50, 3, 5);
	Player* me = new Player("�� ĳ����", "�÷��̾�", 150, 10, 5);

	Skill* pSkill = new Skill("ȸ��ȸ����", 10);
	Skill* mSkill = new Skill("�����ġ��", 5);

	me->Attack(*mop);
	mop->Attack(*me);
	me->AttackWithSkill(*pSkill, *mop);

	delete mop;
	delete me;
	delete pSkill;
	delete mSkill;

	mop = nullptr;
	me = nullptr;
	pSkill = nullptr;
	mSkill = nullptr;

	test1* t1 = new test1("�׽�Ʈ1", "�׽�Ʈ1", 1, 2, 3);
	test2* t2 = new test2("�׽�Ʈ2", "�׽�Ʈ2", 1, 2, 3);
	test3* t3 = new test3("�׽�Ʈ3", "�׽�Ʈ3", 1, 2, 3);
	
}