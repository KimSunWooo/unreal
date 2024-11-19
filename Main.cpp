// <include>
// include 지시문에 포함한 헤더파일에 내용을 현재파일에 포함한다.
// <> 안에들어있는 것은 이미 정의 되어있는 표준 라이브러리
#include<iostream>
// <> : 시스템 헤더에서 사용 (c++을 설치한 폴더에서 헤더파일을 찾음)
// "" : 유저의 헤더에서 사용 (프로젝트 폴더에서 헤더파일을 찾음) > 사용자가 정의한 헤더파일
// 
// 현재 전역적인 공간에 있음. std라는 namespace를 사용 함.
// ; 빠뜨리지말자.
// using namespace std;

// 프로그램의 시작점. 프로그램에 반드시 하나의 main 함수를 포함 시켜야 함.
// cout은 c++ 에서 표준 출력 스트림을 나타내는 객체 ~ console.log 역할
// iostream 헤더파일에 포함되는 객체
// << 는 값을 전달한다 라는 정도로만 이해
// endl = 줄바꿈
int main() {
	// c 는 printf 라는 메소드로 사용
	// cout 은 그냥 출력 도구
	std:: cout << "환영" << std::endl;
	std::cout << "경일 게임 아카데미" << std::endl;
	std::cout << 3.14 << std::endl;

	
}

