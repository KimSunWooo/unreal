#include<iostream>
#include<string>

/*************
아래와 같은 예시가 있을 때

1. 레벨업 기능을 구현해라 (함수로)
  - 플레이어가 경험치를 쌓고 특정 경험치 이상이면 레벨업.
2. 매우 간단한 공격함수 만들기


*************/
using namespace std;

enum class Job {
	Warrior,
	Mage,
	Archor

};

struct Charactor {
	string name;
	int level;
	Job job;
	int acc; //경험치
	int hp; // hp
	int atk; //공격력
};

struct Mop {
	string name;
	int level;
	int acc; // 사냥시 얻는 경험치
	int hp; // hp
	int atk; //공격력
};

int const LevelUp(Charactor& c) {
	c.level++;
	
	return c.level;
};

int Attack(Charactor& c1, Mop& c2) {
	cout << "공격력 : " << c1.atk << endl;
	
	c2.hp = c2.hp - c1.atk;
	if (c2.hp <= 0) {
		cout << "Monster is dead" << endl;
		c1.acc = c1.acc + c2.acc;
		cout << "현재 경험치 : " << c1.acc << endl;
		cout << "고블린의 남은 hp : " << 0 << endl;
	}
	else {
		cout << "고블린의 남은 hp : " << c2.hp << endl;
	}
	if (c1.acc >= 10) {
		LevelUp(c1);
		cout << "Level Up" << c1.level << endl;
	}

	cout << c1.name << "의 레벨" << c1.level << endl;
	return c2.hp;
};

int Attack(Mop& c1, Charactor& c2) {
	cout << "공격력 : " << c1.atk << endl;

	c2.hp = c2.hp - c1.atk;
	cout << "플레이의 남은 hp : " << c2.hp << endl;
	if (c2.hp <= 0) {
		cout << "플레이어 사망" << endl;
	}

	return c2.hp;
};




string GetName(Job j) {
	switch (j)
	{
	case Job::Warrior: return "전사";
		break;
	case Job::Mage: return "법사";
		break;
	case Job::Archor: return "양궁 금메달리스트";
		break;
	default:  return "아무것도 선택하지 않음.";
		break;
	}
}

int main() {
	char atkyn;
	Charactor p1 = { "김선우", 1, Job::Archor, 0, 200, 15 };
	Charactor p2 = { "김선우1", 2, Job::Mage, 0, 200, 15 };
	Charactor p3 = { "김선우2", 3, Job::Archor, 0, 15 };

	Mop m1 = { "고블린", 1, 20, 100, 6 };

	cout << "고블린을 공격하시겠습니까 ? y / n" << endl;
	cin >> atkyn;

	if (atkyn == 'y') {
		cout << "고블린을 공격합니다" << endl;
		while (m1.hp > 0) {
			p1.hp = Attack(m1, p1);
			m1.hp = Attack(p1, m1);
		}
	}
	else {
		cout << "종료" << endl;
	}

	
}
