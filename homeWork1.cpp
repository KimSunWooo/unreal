#include<iostream>
using namespace std;
int main() {
	cout << "별찍기 과제입니다." << endl;
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
	cout << "가위바위보 과제입니다." << endl;

	
	int num;
	int cnt = 1;
	int p;

	cout << "가위바위보 게임 횟수를 정해주세요 : ";
	cin >> p;
	
		

	while (cnt <= p) {
		srand(time(NULL));
		int ran = rand() % 3 + 1;

		cout << "현재 " << cnt << "번째" << "게임입니다." << endl;;
		cout << "가위 바위 보 중 하나를 선택하시오 1. 가위 2. 바위 3. 보 :";
		cin >> num;
		if (ran == num) {
			cout << "이번판은 비겼습니다." << endl;
			cnt++;
			continue;
		}
		switch (ran)
		{
		case 1 : cout << "컴퓨터는 가위를 냈습니다." << endl;
			if (num == 3) {
				cout << "패." << endl;
				cnt++;
				continue;
			}
			else {
				cout << "승." << endl;
				cnt++;
				continue;
			}
		case 2 : cout << "컴퓨터는 바위를 냈습니다." << endl;
			if (num == 1) {
				cout << "패." << endl;
				cnt++;
				continue;
			}
			else {
				cout << "승." << endl;
				cnt++;
				continue;
			}
		case 3 : cout << "컴퓨터는 보를 냈습니다." << endl;
			if (num == 2) {
				cout << "패." << endl;
				cnt++;
				continue;
			}
			else {
				cout << "승." << endl;
				cnt++;
				continue;
			}
		}

		
	}
}