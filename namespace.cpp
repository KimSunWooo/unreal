/*
[namespace]
- 이름 충돌을 방지해주고 코드의 구조를 더 명확하게 하기 위해서 사용.
- 규모가 큰 프로젝트에서는 여러 라이브러리, 코드 모듈이 함께 사용된다.
- 동일한 이름의 함수, 클래스, 변수가 존재할 수 있는데 네임스페이스로 구분하여 충돌을 방지하는데에 큰 역할을 한다.
- 특정 이름을 네임스페이스 안에 넣어 독립적인 이름 공간을 만들어줌
- 관련된 함수, 변수, 클래스를 네임스페이스 안에 모아두면 관리가 매우 용이하다.

[기본구조]
namespace testNameSpace {

};
*/

#include<iostream>
using namespace std;
namespace testNameSpace {
	int num = 5;

	void Print() {
		std::cout << "testNameSpace의 함수" << std::endl;
	}
	namespace test1 {
		int num = 1;
	}
};
using namespace testNameSpace;
int main() {
	std::cout << testNameSpace::num << std::endl;
	// 네임 스페이스도 중첩이 된다.
	std::cout << testNameSpace::test1::num << std::endl;

	Print();
}