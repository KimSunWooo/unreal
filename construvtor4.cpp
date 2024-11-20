/*
[복사 생성자]
 - 동일한 클래스의 객체를 복사하여 객체를 생성할 때 사용하는 생성자.


 ** 면접 질문
 1. 얕은 복사 : 객체를 복사할 때, 객체의 모든 멤버 변수를 단순히 복사.
 - 만약 멤버 변수가 포인터인 경우라면 포인터의 주소값만 복사.
  -> 즉, 같은 메모리 영역을 가리키게 됨.(문제가 생길 수 있다.)
  -> 만약 한 객체에서 해당 메모리를 수정하면 영향을 받는다.
  -> 두 객체가 같은 메모리 주소를 가리키기 때문에 한 객체가 소멸되면서 메모리를 해제하면
   다른 객체는 더이상 유효하지 않은 메모리를 가리키게 되어 문제가 발생된다.


 2. 깊은 복사 : 원본 객체와 동일한 값을 가지는 새로운 메모리를 할당하여 복사하는 것.
 -> 다른 메모리를 사용하게 되므로 서로 영향을 주지 않는다.




*/

#include<iostream>
#include<vector>
using namespace std;

#pragma region ShallowCopy
//class MyArray
//{
//private:
//	int* data;
//	int size;
//public:
//	MyArray(int size) :
//		size(size), data(new int[size]) {
//	}
//
//	//기본 복사 생성자(얕은 복사) : 없어도 자동으로 넣어줌.
//	MyArray(const MyArray& other)
//		: size(other.size), data(other.data)
//	{
//		cout << "복사 생성자 호출" << endl;
//	}
//
//	~MyArray()
//	{
//		delete[] data;
//	}
//	void SetValue(int index, int value)
//	{
//		data[index = value];
//	}
//	int GetValue(int index) { return data[index]; }
//	int* GetDataAddr() { return data; };
//
//};

#pragma endregion


#pragma region DeepCopy

class MyArray
{
private :
	int* data;
	int size;

public:
	MyArray(int size);
	//깊은 복사

	MyArray(const MyArray& other);
	~MyArray();


	int* GetDataArr()const { return data; }


};

MyArray::MyArray(int size)
{
	this->size = size;
	data = new int[size];
}

//깊은 복사
MyArray::MyArray(const MyArray& other)
{
	cout << "복사 생성자 호출" << endl;
	this->size = other.size;
	this->data = new int[other.size];	// 새로운 공간 할당.
	for (int i = 0; i < size; i++)//데이터 복사.
	{
		this->data[i] = other.data[i];
	}
}

MyArray::~MyArray()
{
	if (data != nullptr)
	{
		delete[] this->data;
		data = nullptr;
	}
}

#pragma endregion


class MyClass
{
private:
	int data;
public:
	MyClass(int value)
		: data(value)
	{
		cout << "생성자 호출" << endl;
	}

	MyClass(const MyClass& other) :data(other.data)
	{
		cout << "복사 생성자" << endl;
	}
	void Show()const
	{
		cout << "데이터 : " << data << endl;
	}
};

void Func(MyClass& m)
{
	//객체를 함수 인자로 전달하게 될 때 복사 생성자가 실행되게 된다.
	//복사를 할 상황이 생긴다, 객체를 인자로 넘긴다면
	// & 연산자를 사용해서 복사 생성자가 실행되는 것을 막는다.
	cout << "복사된 객체 " << endl;
	m.Show();
}

int main()
{
	//1. 얕은 복사
	/*1. 얕은 복사
	//MyArray arr3(10);

	////객체 복사 but 복사 생성자가 없어도 자동으로 복사하여 넣어준다.
	////defalut 복사 생성자는 얕은 복사로 이루어진다.
	//MyArray arr2 = arr3;
	//MyArray arr2(arr3);


	//MyArray arr1(10);
	////MyArray arr2 = arr1;
	//arr1.SetValue(0, 42);


	//MyArray arr2(arr1);	//복사 생성자 호출(얕은 복사)

	//cout << arr1.GetDataAddr() << endl;
	//cout << arr2.GetDataAddr() << endl;

	//cout << arr1.GetValue(0) << endl;
	//cout << arr2.GetValue(0) << endl;

	//arr1.SetValue(0, 80);
	//cout << arr1.GetValue(0 )<< endl;
	//cout << arr2.GetValue(0 )<< endl;*/



	//2. 깊은 복사
	/*MyArray arr(10);
	cout << arr.GetDataArr() << endl;

	MyArray clone = arr;

	cout << clone.GetDataArr() << endl;*/

	MyClass m(10);

	Func(m);

	m.Show();

	//벡터를 사용하게 되면, 복사의 형태로 객체를 생성한다.
	//그럴 때는 포인터로 넘겨 객체의 주소값을 전달하게 된다.
	//vector<MyClass*>


}