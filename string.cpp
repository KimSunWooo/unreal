/***

[C ������ ��ǥ���� ���ڿ� ���� �Լ���]

 - strlen (const char* str) : ���ڿ��� ���̸� ��ȯ.
 - strcpy (char* dest, char* src) : ���ڿ� src�� dest�� ����
 - strcat (char* dest, char* src) : ���ڿ� src�� dest�� ���ڿ� ���� �̾���δ�.
 - strcmp (char* str1, char* str2) : str1�� str2 ���ڿ��� ���������� ��, �����ϸ� 0, str1�� str2 ���� ������ ����, �ƴϸ� ����� ����.

 ����2

 2.1 - ���ڿ��� ����� ¦����°�� ���.
 2.2 - ���ڿ� �� Ư�� ���� ã��.
	> ������ ã���� �ش� ������ �ε��� ���
	> ������ ���и� ��Ÿ���� ��¹� ���.
 -> �Լ��� ǥ��

***/

#include<iostream>
#include<string>
using namespace std;

void ReverseChar(char c) {
};
int FindChar(char str[], char c) {

	return -1;
};

int main() {

	const char* str = "Hello";
	char str1[10] = "abcd";

	cout << strlen(str) << endl;
	cout << strlen(str1) << endl;

	const char* strcmp1 = "aaa";
	const char* strcmp2 = "aaa";

	cout << strcmp(strcmp1, strcmp2) << endl;
	// �ƽ�Ű �ڵ尪 �������� �Ǵ�.
	cout << strcmp("aaa", "aaa") << endl;
	cout << strcmp("aab", "aaa") << endl;
	cout << strcmp("aab", "aac") << endl;

	char strcpy[10] = "Hello";
	char strcpy1[10];

	strcpy_s(strcpy1, strcpy);

	cout << strcpy1 << endl;

	int len = strlen(str1);
	char tmp;
	for (int i = 0; i < len / 2; i++)
	{
		tmp = str1[i];
		str1[i] = str[len - 1];
		str1[len - i - 1] = tmp;
	}


}