
/**********
������ ��� �ʱ�ȭ ����Ʈ
 - ��������� ������ �����ȿ��� �ʱ�ȭ
 - ������ �Ű����� �ڿ� ���Ե�. �ݷ� : ���� ������ ���� �ʱ�ȭ �� �� ������ ��ǥ�� ������.

 [Getter, Setter]
 - �⺻������ ��������� ��ȣ�ϸ鼭 �����͸� ������ �� �ִ� ���
 - ��������� proivate�� �����ϰ� �ܺο��� �������� ������ ����
 -= ��ü�� �����͸� ��ȣ�ϰ� �ܺο��� �������̽��� ����

 1. Getter
 - �б��������� ��������� ���� ��ȯ
 - const�� �Լ� �ڿ� �ٿ��� ��� ������ ������ ����

 2. Setter
 - ��������� ���� ����
 - 

**********/
#include<string>
#include<iostream>
class A
{
public:
	A() {
		// ������ ����
		// ���⼭ ��� ������ �ʱ�ȭ
	};

private:

};

class Exam
{
public:
	const int num;
	int& score;

	Exam(int num, int score) : num(num), score(score) {

	};

private:

};


class Monster
{
public:
	std::string mName;
	int mAtk;
	int mHealth;
	
	Monster(const std::string& monsterName, int monsterAtk, int monsterHealth)
		:mName(monsterName), mAtk(monsterAtk), mHealth(monsterHealth)
	{
		// ���⼭ �ʱ�ȭ�� �ʿ䰡 ����.
		Init();
	}
	void Init();
private:

};

class Person
{
public:
	std::string GetName() const { return mName; }
	int GetAge() const { return mAge; }
	void SetName(const std::string& name) {
		mName = name;
	}
	void setAge(const int age) { mAge = age; }

private:
	// ��������� ���ܾ��Ѵ�.
	std::string mName;
	int mAge;
};


int main() {
	//Monster* m = new Monster("���", 10, 20);

	Person p;
	p.SetName("����");
	p.setAge(29);

	std::cout << "�̸� : " << p.GetName() << std::endl;
	std::cout << "���� : " << p.GetAge() << std::endl;

	// ����
	// 1. ����ʱ�ȭ ����Ʈ�� Ȱ���Ͽ� ��ü�ʱ�ȭ�� �ϰ� ����غ���.
	// 2. Get, Set�� Ȱ���Ͽ� �÷��̾�� ���� �������� �����
	// ü��, ���ݷ¸�

	// 3. OOP �� ���� ��ǥ�ڷ� �����
	// ������ ����.
}