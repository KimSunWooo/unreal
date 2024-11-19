#include<iostream>
using namespace std;
/*
// 포인터 연산
// 포인터 변수에 +, - 
// 중요한건 포인터 연산 시 자료형의 크기에 비례해서 증가 또는 감소


// 대입
- 한 포인터가 다른포인터와 동일한 메모리 주소를 가리키도록 함
- 포인터의 타입은 일치해야 한다.
- 여러 포인터가 동일한 메모리 주소를 가리키면 메모리 해제 시 문제가 발생할 수 있다.
*/


/*
포인터에는 왜 타입이 있을까..주소만 저장하는데

만약에 포인터라는 타입이 있다면
Pointer(라는 타입이 있다고 할 때)*p
p = &a;

p는 a의 주소값이 저장되어 있음.
문제는
a가 메모리에서 차지하는 모든 주소들의 위치가 들어가 있는게 아니라
시작 주소만 주소만 들어가 있다.

즉 컴퓨터가 메모리에 얼마만큼 읽어 들여야할 지 알 방법이 없다.
*/
int main() {
	int a;
	int* pa = &a;
	cout << "pa의 값 : " << pa << endl;

	cout << (pa + 1) << endl;
	cout << (pa - 1) << endl;

	int num = 10;
	pa = &num;
	int* pb = pa;

	cout << *pa << endl;
	cout << *pb << endl;

	*pa = 20;
	// 같은 주소를 가리키고 있기 때문에 변경 후에 pb가 변경.
	cout << *pa << endl;
	cout << *pb << endl;

	int intA = 10;
	int* pIntA = &intA;
	//double* pDouble = pIntA;
}