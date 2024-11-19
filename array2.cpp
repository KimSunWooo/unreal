#include<iostream>
/*

*/
int main() {
	int numbers[10];
	

	for (int i = 0; i < 10; i++)
	{
		numbers[i] = i;
	}

	// 셔플 전 데이터
	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "] 인덱스 : " << numbers[i] << std::endl;
	}
	// 셔플용 변수들
	int dest, sour, tmp;

	for (int i = 0; i < 1000; i++) {
		dest = rand() % 10; // 0 ~ 9
		sour = rand() % 10; // 0 ~ 9

		tmp = numbers[dest];
		numbers[dest] = numbers[sour];
		numbers[sour] = tmp;
	}

	// 셔플 후 데이터
	for (int i = 0; i < 10; i++)
	{
		std::cout << "numbers[" << i << "] 인덱스 : " << numbers[i] << std::endl;
	}

	// 로또알고리즘..

	int lotto[45];
	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}
	for (int i = 0; i < 777; i++) {
		dest = rand() % 45; // 0 ~ 9
		sour = rand() % 45; // 0 ~ 9

		tmp = lotto[dest];
		lotto[dest] = lotto[sour];
		lotto[sour] = tmp;
	}

	for (int i = 0; i < 6; i++) {
		std::cout << "이번주 당첨번호는" << lotto[i] << std::endl;
	}


	// 실습
	// 10명의 학생 성적을 입력, 배열에 저장하고 총점과 평균을 구해라.

	int score[10];
	int sum = 0;;
	double avg = 0;
	for (int i = 0; i < 10; i++) {
		std::cout << i + 1 << "번째 학생의 성적입력" << std::endl;
		std::cin >> score[i];
		 
	}
	
	for (int i = 0; i < 10; i++) {
		sum += score[i];
		avg += score[i] / 10;
	}
	std::cout << "성적의 합계는 : " << sum << std::endl;
	std::cout << "성적의 평균은 : " << avg << std::endl;
}