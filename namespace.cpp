/*
[namespace]
- �̸� �浹�� �������ְ� �ڵ��� ������ �� ��Ȯ�ϰ� �ϱ� ���ؼ� ���.
- �Ը� ū ������Ʈ������ ���� ���̺귯��, �ڵ� ����� �Բ� ���ȴ�.
- ������ �̸��� �Լ�, Ŭ����, ������ ������ �� �ִµ� ���ӽ����̽��� �����Ͽ� �浹�� �����ϴµ��� ū ������ �Ѵ�.
- Ư�� �̸��� ���ӽ����̽� �ȿ� �־� �������� �̸� ������ �������
- ���õ� �Լ�, ����, Ŭ������ ���ӽ����̽� �ȿ� ��Ƶθ� ������ �ſ� �����ϴ�.

[�⺻����]
namespace testNameSpace {

};
*/

#include<iostream>
using namespace std;
namespace testNameSpace {
	int num = 5;

	void Print() {
		std::cout << "testNameSpace�� �Լ�" << std::endl;
	}
	namespace test1 {
		int num = 1;
	}
};
using namespace testNameSpace;
int main() {
	std::cout << testNameSpace::num << std::endl;
	// ���� �����̽��� ��ø�� �ȴ�.
	std::cout << testNameSpace::test1::num << std::endl;

	Print();
}