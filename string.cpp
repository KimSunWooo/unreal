/***

[C 에서의 대표적인 문자열 관련 함수들]

 - strlen (const char* str) : 문자열의 길이를 반환.
 - strcpy (char* dest, char* src) : 문자열 src를 dest로 복사
 - strcat (char* dest, char* src) : 문자열 src를 dest로 문자열 끝에 이어붙인다.
 - strcmp (char* str1, char* str2) : str1과 str2 문자열을 사전순으로 비교, 동일하면 0, str1이 str2 보다 작으면 음수, 아니면 양수를 리턴.

 과제2

 2.1 - 문자열을 뒤집어서 짝수번째만 출력.
 2.2 - 문자열 내 특정 문자 찾기.
	> 문자을 찾으면 해당 문자의 인덱스 출력
	> 없으면 실패를 나타내는 출력문 출력.
 -> 함수로 표현

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
	// 아스키 코드값 기준으로 판단.
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