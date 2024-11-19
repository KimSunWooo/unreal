/**************************
[생성자(constructor)]
- 객체가 생성될 때 자동으로 호출되는 특별한 멤버함수.
- 객체의 초기화를 담당.
- 클래스의 이름과 동일한 이름을 가진다.
- 반환값이 없다.
- 오버로딩이 가능하다. (여러개의 생성자를 정의할 수 있다.)
- 기본생성자, 매개변수가 있는 생성자, 복사 생성자.

[기본생성자]
- 매개변수가 없는 생성자. 명시적으로 정의하지 않으면 컴파일러가 자동으로 제공함.

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
		mName = "김선우";
		mAtk = 10;
		mDef = 200;
	}

	// 매개변수가 있는 생성자
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
	std::cout << "이름 : " << mName << std::endl;
	std::cout << "공격력 : " << mAtk << std::endl;
	std::cout << "방아력 : " << mDef << std::endl;
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
		name = "김선우";
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

	CPlayer* player1 = new CPlayer("홍길남", 10, 20);

	player1->PrintInfo();

	delete player;
	player = nullptr;
	delete player1;
	player1 = nullptr;

	Person* person = new Person();
	Person* person1 = new Person("김선우", 29, "960224", "01073824100");

	person->printPersonInfo();
	person1->printPersonInfo();

	delete person;
	person = nullptr;
	delete person1;
	person1 = nullptr;
};

/*
실습
Person 이라는 클래스를 생성
1. 속성
-  이름, 나이, 생년월일, 전화번호

2. 기능
- 위 정보를 출력하는 함수를 만들어라.

*/