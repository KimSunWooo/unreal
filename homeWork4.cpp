#include<string>;
#include<iostream>
using namespace std;

struct Charactor {
	string name;
	int level;
	int acc; //����ġ
	int hp; // hp
	int atk; //���ݷ�
};

struct Mop {
	string name;
	int level;
	int acc; // ��ɽ� ��� ����ġ
	int hp; // hp
	int atk; //���ݷ�
};

int const LevelUp(Charactor& c) {
	c.level++;

	return c.level;
};

int Attack(Charactor& c1, Mop& c2) {
	cout << "���ݷ� : " << c1.atk << endl;

	c2.hp = c2.hp - c1.atk;
	if (c2.hp <= 0) {
		cout << "Monster is dead" << endl;
		c1.acc = c1.acc + c2.acc;
		cout << "���� ����ġ : " << c1.acc << endl;
		cout << "����� ���� hp : " << 0 << endl;
	}
	else {
		cout << "����� ���� hp : " << c2.hp << endl;
	}
	if (c1.acc >= 10) {
		LevelUp(c1);
		cout << "Level Up" << c1.level << endl;
	}

	cout << c1.name << "�� ����" << c1.level << endl;
	return c2.hp;
};

int Attack(Mop& c1, Charactor& c2) {
	cout << "���ݷ� : " << c1.atk << endl;

	c2.hp = c2.hp - c1.atk;
	cout << "�÷����� ���� hp : " << c2.hp << endl;
	if (c2.hp <= 0) {
		cout << "�÷��̾� ���" << endl;
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
			//cout << c << "�� " << str << "��" << i << "��° �ε����� ��ġ�մϴ�." << endl;
			cout << i << endl;
			stmt += to_string(i) + " ";
			cnt++;
		}
		else {
			continue;
		}
	}
	if (cnt == 0) {
		cout << c << "�� " << str << "�� �������� �ʽ��ϴ�." << endl;
		return 0;
	}
	else {
		cout << c << "�� " << str << "��" << stmt << "��° �ε����� �����մϴ�." << endl;
	}
	return cnt;
};

int main() {
	char atkyn;
	Charactor p1 = { "�輱��", 1, 0, 200, 15 };
	Charactor p2 = { "�輱��1", 2, 0, 200, 15 };
	Charactor p3 = { "�輱��2", 3, 0, 15 };

	Mop m1 = { "���", 1, 20, 100, 6 };

	cout << "����� �����Ͻðڽ��ϱ� ? y / n" << endl;
	cin >> atkyn;

	if (atkyn == 'y') {
		cout << "����� �����մϴ�" << endl;
		while (m1.hp > 0) {
			p1.hp = Attack(m1, p1);
			m1.hp = Attack(p1, m1);
		}
	}
	else {
		cout << "����" << endl;
	}

/***
 ����2

 2.1 - ���ڿ��� ����� ¦����°�� ���.
 2.2 - ���ڿ� �� Ư�� ���� ã��.
	> ������ ã���� �ش� ������ �ε��� ���
	> ������ ���и� ��Ÿ���� ��¹� ���.
 -> �Լ��� ǥ��

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