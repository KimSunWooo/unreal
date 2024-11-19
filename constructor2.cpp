
/**********
생성자 멤버 초기화 리스트
 - 멤버변수가 생성자 본문안에서 초기화
 - 생성자 매개변수 뒤에 삽입됨. 콜론 : 으로 시작한 다음 초기화 할 각 변수를 쉼표로 구분함.

 [Getter, Setter]
 - 기본적으로 멤버변수를 보호하면서 데이터를 제어할 수 있는 방법
 - 멤버변수를 proivate로 선언하고 외부에서 직접적인 접근을 차단
 -= 객체의 데이터를 보호하고 외부와의 인터페이스를 제공

 1. Getter
 - 읽기전용으로 멤버변수의 값을 반환
 - const를 함수 뒤에 붙여서 멤버 변수의 변경을 방지

 2. Setter
 - 멤버변수의 값을 설정
 - 

**********/
#include<string>
#include<iostream>
class A
{
public:
	A() {
		// 생성자 본문
		// 여기서 멤버 변수를 초기화
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
		// 여기서 초기화할 필요가 없음.
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
	// 멤버변수는 숨겨야한다.
	std::string mName;
	int mAge;
};


int main() {
	//Monster* m = new Monster("고블린", 10, 20);

	Person p;
	p.SetName("하이");
	p.setAge(29);

	std::cout << "이름 : " << p.GetName() << std::endl;
	std::cout << "나이 : " << p.GetAge() << std::endl;

	// 과제
	// 1. 멤버초기화 리스트를 활용하여 객체초기화를 하고 출력해보기.
	// 2. Get, Set을 활용하여 플레이어와 몬스터 전투게임 만들기
	// 체력, 공격력만

	// 3. OOP 에 대해 발표자료 만들기
	// 팀으로 진행.
}