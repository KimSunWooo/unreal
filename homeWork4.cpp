#include<string>;
#include<iostream>
using namespace std;

struct Charactor {
	string name;
	int level;
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

void ReverseChar(char str[]) {
	int length = strlen(str);
	string word = "";
	char tmp;
	for (int i = 0; i < length / 2; i++) {
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
	}
	
	cout << "str : " << str << endl;

	for (int i = 0; i < length ; i++) {
		if (i % 2 == 0) {
			word += str[i];
		}
	}
	cout << "word : " << word << endl;
};

void ReverseChar2(char str[]) {
	string word = "";
	int length = strlen(str);

	for (int i = length - 1; i >= 0; i-=2) {
		
		word += str[i];
		
	}
	cout << "word is " << word << endl;
}


int FindChar(char str[], char c) {
	int length = strlen(str);
	int cnt = 0;
	string stmt = "";
	for (int i = 0; i < length; i++) {
		if (str[i] == c) {
			//cout << c << "는 " << str << "의" << i << "번째 인덱스에 위치합니다." << endl;
			cout << i << endl;
			stmt += to_string(i) + " ";
			cnt++;
		}
		else {
			continue;
		}
	}
	if (cnt == 0) {
		cout << c << "는 " << str << "에 존재하지 않습니다." << endl;
		return 0;
	}
	else {
		cout << c << "는 " << str << "의" << stmt << "번째 인덱스에 존재합니다." << endl;
	}
	return cnt;
};

int main() {
	char atkyn;
	Charactor p1 = { "김선우", 1, 0, 200, 15 };
	Charactor p2 = { "김선우1", 2, 0, 200, 15 };
	Charactor p3 = { "김선우2", 3, 0, 15 };

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

/***
 과제2

 2.1 - 문자열을 뒤집어서 짝수번째만 출력.
 2.2 - 문자열 내 특정 문자 찾기.
	> 문자을 찾으면 해당 문자의 인덱스 출력
	> 없으면 실패를 나타내는 출력문 출력.
 -> 함수로 표현

***/

	char str1[] = "my name is";
	char str2[] = "my name is";
	ReverseChar(str1);

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	char str3[] = "c++ is difficult";
	FindChar(str3, 'c');
	char str4[] = "hi bro";
	FindChar(str4, 'c');

	ReverseChar2(str2);

}