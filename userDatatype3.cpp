#include<iostream>
#include<string>

/*************
�Ʒ��� ���� ���ð� ���� ��

1. ������ ����� �����ض� (�Լ���)
  - �÷��̾ ����ġ�� �װ� Ư�� ����ġ �̻��̸� ������.
2. �ſ� ������ �����Լ� �����


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




string GetName(Job j) {
	switch (j)
	{
	case Job::Warrior: return "����";
		break;
	case Job::Mage: return "����";
		break;
	case Job::Archor: return "��� �ݸ޴޸���Ʈ";
		break;
	default:  return "�ƹ��͵� �������� ����.";
		break;
	}
}

int main() {
	char atkyn;
	Charactor p1 = { "�輱��", 1, Job::Archor, 0, 200, 15 };
	Charactor p2 = { "�輱��1", 2, Job::Mage, 0, 200, 15 };
	Charactor p3 = { "�輱��2", 3, Job::Archor, 0, 15 };

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

	
}
