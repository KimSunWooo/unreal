#include<iostream>
using namespace std;
int main() {
	cout << "����� �����Դϴ�." << endl;
	int n = 5;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "/////////////////////////" << endl;

	for (int i = n; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "/////////////////////////" << endl;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "/////////////////////////" << endl;

	for (int i = n; i > 0; i--) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int k = 5; k > n - i; k--) {
			cout << "*";
		}
		
		cout << endl;
	}
	

	cout << "/////////////////////////" << endl;
	cout << "���������� �����Դϴ�." << endl;

	
	int num;
	int cnt = 1;
	int p;

	cout << "���������� ���� Ƚ���� �����ּ��� : ";
	cin >> p;
	
		

	while (cnt <= p) {
		srand(time(NULL));
		int ran = rand() % 3 + 1;

		cout << "���� " << cnt << "��°" << "�����Դϴ�." << endl;;
		cout << "���� ���� �� �� �ϳ��� �����Ͻÿ� 1. ���� 2. ���� 3. �� :";
		cin >> num;
		if (ran == num) {
			cout << "�̹����� �����ϴ�." << endl;
			cnt++;
			continue;
		}
		switch (ran)
		{
		case 1 : cout << "��ǻ�ʹ� ������ �½��ϴ�." << endl;
			if (num == 3) {
				cout << "��." << endl;
				cnt++;
				continue;
			}
			else {
				cout << "��." << endl;
				cnt++;
				continue;
			}
		case 2 : cout << "��ǻ�ʹ� ������ �½��ϴ�." << endl;
			if (num == 1) {
				cout << "��." << endl;
				cnt++;
				continue;
			}
			else {
				cout << "��." << endl;
				cnt++;
				continue;
			}
		case 3 : cout << "��ǻ�ʹ� ���� �½��ϴ�." << endl;
			if (num == 2) {
				cout << "��." << endl;
				cnt++;
				continue;
			}
			else {
				cout << "��." << endl;
				cnt++;
				continue;
			}
		}

		
	}
}