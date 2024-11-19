/**************************
[������(constructor)]
- ��ü�� ������ �� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�.
- ��ü�� �ʱ�ȭ�� ���.
- Ŭ������ �̸��� ������ �̸��� ������.
- ��ȯ���� ����.
- �����ε��� �����ϴ�. (�������� �����ڸ� ������ �� �ִ�.)
- �⺻������, �Ű������� �ִ� ������, ���� ������.

[�⺻������]
- �Ű������� ���� ������. ��������� �������� ������ �����Ϸ��� �ڵ����� ������.

**************************/
#include<iostream>
#include<string>
class CPlayer
{
public : 
	std::string mName;
	int mAtk;
	int mDef;
public:
	CPlayer() {
		mName = "�輱��";
		mAtk = 10;
		mDef = 200;
	}

	// �Ű������� �ִ� ������
	CPlayer(const std::string& playerName, const int playerAtk, const int playerDef) {
		mName = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}
	
	void PrintInfo() const;
private:

};

void CPlayer::PrintInfo() const
{
	std::cout << "�̸� : " << mName << std::endl;
	std::cout << "���ݷ� : " << mAtk << std::endl;
	std::cout << "��Ʒ� : " << mDef << std::endl;
}

class Person
{
public :
	std::string name;
	int age;
	std::string birth;
	std::string phNum;
public:
	Person() {
		name = "�輱��";
		age = 29;
		birth = "960224";
		phNum = "01073824100";
	};
	
	Person(const std::string pName, const int pAge, const std::string pBirth, std::string pphNum) {
		name = pName;
		birth = pBirth;
		age = pAge;
		phNum = pphNum;
	};
public : 
	void printPersonInfo() {
		std::cout << "name : " << name << "age : " << age << "birth : " << birth << "phNum : " << phNum << std::endl;
	};
private:
	
};




int main() {
	CPlayer* player = new CPlayer();
	player->PrintInfo();

	CPlayer* player1 = new CPlayer("ȫ�泲", 10, 20);

	player1->PrintInfo();

	delete player;
	player = nullptr;
	delete player1;
	player1 = nullptr;

	Person* person = new Person();
	Person* person1 = new Person("�輱��", 29, "960224", "01073824100");

	person->printPersonInfo();
	person1->printPersonInfo();

	delete person;
	person = nullptr;
	delete person1;
	person1 = nullptr;
};

/*
�ǽ�
Person �̶�� Ŭ������ ����
1. �Ӽ�
-  �̸�, ����, �������, ��ȭ��ȣ

2. ���
- �� ������ ����ϴ� �Լ��� ������.

*/