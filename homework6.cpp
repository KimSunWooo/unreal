using namespace std;
#include<string>
#include<iostream>

class Skill
{

public:
	Skill(const string& n, const int d) : name(n), dmg(d) {
		cout << "이것은 스킬" << endl;
		cout << "이름은 " << name << endl;
		cout << "데미지는 " << dmg << endl;
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
		cout << kind << "정보" << endl;
		cout << "이름 : " << name << endl;
		cout << "체력 : " << health << endl;
		cout << "공격력 : " << atk << endl;
		cout << "방어력 : " << def << endl;
	}
	void Attack(Unit& target) {
		int damage = max(0, atk - target.def); // 방어력 계산
		cout << name << "이(가) 일반 공격으로 " << target.name << "을(를) 공격했다." << endl;
		cout << target.name << "은(는) " << damage << "의 피해를 입었다." << endl;
		target.TakeDamage(damage);
	}

	// 스킬 공격 메서드
	void AttackWithSkill(Skill& skill, Unit& target) {
		cout << name << "이(가) 스킬 " << skill.getSkillName() << "로 " << target.name << "을(를) 공격했다." << endl;
		cout << target.name << "은(는) " << skill.getSkillDmg() << "의 피해를 입었다." << endl;
		target.TakeDamage(skill.getSkillDmg());
	}

	// 데미지를 입는 메서드
	void TakeDamage(int damage) {
		health -= damage;
		if (health <= 0) {
			cout << name << "이(가) 쓰러졌습니다!" << endl;
		}
		else {
			cout << name << "의 남은 체력: " << health << endl;
		}
	}

	void PrintPublic() {
		cout << "여기는 부모 클래스의 public 영역" << endl;
	}
	

protected:
	void PrintProtected() {
		cout << "여기는 부모 클래스의 protected 영역" << endl;
	}

private:
	int health;
	string name;
	string kind;
	int atk;
	int def;

	void PrintPrivate() {
		cout << "여기는 부모 클래스의 private 영역" << endl;
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
	Monster* mop = new Monster("토꺵이", "몬스터", 50, 3, 5);
	Player* me = new Player("내 캐릭터", "플레이어", 150, 10, 5);

	Skill* pSkill = new Skill("회전회오리", 10);
	Skill* mSkill = new Skill("몸통박치기", 5);

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

	test1* t1 = new test1("테스트1", "테스트1", 1, 2, 3);
	test2* t2 = new test2("테스트2", "테스트2", 1, 2, 3);
	test3* t3 = new test3("테스트3", "테스트3", 1, 2, 3);
	
}