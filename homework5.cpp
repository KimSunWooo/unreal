#include<iostream>
#include<string>
using namespace std;

class Monster
{
public:
	
	Monster(const string& name, int health, int atk) : mName(name), health(health), atk(atk) {
	};
	
	string getName() const {
		return mName;
	}
	int getHealth() const {
		return health;
	}
	int getAtk() const {
		return atk;
	}

	void setName(const string& name) {
		mName = name;
	}
	void setHealth(const int size) {
		health = size;
	}
	void setAtk(const int size) {
		atk = size;
	}
private:
	string mName;
	int health;
	int atk;
};

class Me
{
public:
	Me(const string& name, int health, int atk) : myName(name), health(health), atk(atk) {
	};

	string getName() const {
		return myName;
	}
	int getHealth() const {
		return health;
	}
	int getAtk() const {
		return atk;
	}

	void setName(const string& name) {
		myName = name;
	}
	void setHealth(const int size) {
		health = size;
	}
	void setAtk(const int size) {
		atk = size;
	}

private:
	string myName;
	int health;
	int atk;
};


int main() {
	// 아래 클래스변수 mop 은 동적 할당이므로 heap영역에 할당되는 부분. heap영역에 할다되므로 포인터 변수로만 접근이 가능.
	Monster* mop = new Monster("goblin", 100, 10);
	string mopName = mop->getName();
	int mopHp = mop->getHealth();
	int mopAtk = mop->getAtk();

	cout << "몬스터 정보************" << endl;
	cout << "이름 : " << mopName << endl;
	cout << "몬스터 체력 : " << mopHp << endl;
	cout << "공격력 : " << mopAtk << endl;

	Me* mine = new Me("김선우", 200, 15);

	string myName = mine->getName();
	int myHp = mine->getHealth();
	int myAtk = mine->getAtk();

	cout << "내 정보***************" << endl;
	cout << "이름 : " << myName << endl;
	cout << "몬스터 체력 : " << myHp << endl;
	cout << "공격력 : " << myAtk << endl;

	cout << "전투를 시작합니다." << endl;
	while (mop->getHealth() >= 0) {
		cout << "내가" << mopName << "에게 피해를 입혔다." << endl;
		mop->setHealth(mop->getHealth() - myAtk);
		if (mop->getHealth() < 0) {
			cout << mopName << "의 체력이 남지 않았다. 승리." << endl;
			break;
		}
		else {
		cout << mopName << "의 체력이" << mop->getHealth() << "만큼 남았다." << endl;
		}
	}
}