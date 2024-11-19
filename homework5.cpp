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
	// �Ʒ� Ŭ�������� mop �� ���� �Ҵ��̹Ƿ� heap������ �Ҵ�Ǵ� �κ�. heap������ �ҴٵǹǷ� ������ �����θ� ������ ����.
	Monster* mop = new Monster("goblin", 100, 10);
	string mopName = mop->getName();
	int mopHp = mop->getHealth();
	int mopAtk = mop->getAtk();

	cout << "���� ����************" << endl;
	cout << "�̸� : " << mopName << endl;
	cout << "���� ü�� : " << mopHp << endl;
	cout << "���ݷ� : " << mopAtk << endl;

	Me* mine = new Me("�輱��", 200, 15);

	string myName = mine->getName();
	int myHp = mine->getHealth();
	int myAtk = mine->getAtk();

	cout << "�� ����***************" << endl;
	cout << "�̸� : " << myName << endl;
	cout << "���� ü�� : " << myHp << endl;
	cout << "���ݷ� : " << myAtk << endl;

	cout << "������ �����մϴ�." << endl;
	while (mop->getHealth() >= 0) {
		cout << "����" << mopName << "���� ���ظ� ������." << endl;
		mop->setHealth(mop->getHealth() - myAtk);
		if (mop->getHealth() < 0) {
			cout << mopName << "�� ü���� ���� �ʾҴ�. �¸�." << endl;
			break;
		}
		else {
		cout << mopName << "�� ü����" << mop->getHealth() << "��ŭ ���Ҵ�." << endl;
		}
	}
}