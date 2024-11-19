#include<iostream>
/*
	������ (operator)

	1. ��� ������
	+ : �� ���� ���Ѵ�.
	- : �� ������ �� ���� ����.
	* : �ΰ��� ���Ѵ�.
	/ : ù��° ���� �ι�° ������ ������.
	% : ù��° ������ �ι�° ���� ���� �������� ��ȯ�Ѵ�.

	2. ���� ������ �ǿ������� ���� 1���� �Ǵ� 1 ���� ��Ų��. ������ ������ ���е�
	++a : �� ���� �� �����Ѵ�. (���� ���� ��Ų �� ����)
	a++ : �� ���� �� �����Ѵ�. (���� ���� �� �� ����)
	--a : �� ���� �� ����. (���� ���� ��Ų �� ����)
	a-- : �� ���� �� ����. (���� ���� �� �� ����)
	������ �������� ��ġ�� �����տ� ������ ����, �ڿ������� ����

	�� ���� ���
	ex) num++, num = num + 1 ������.

	3. ���� ������
	> : a > b >>>>> �ǿ����� a �� �ǿ����� b ���� ũ��
	< : a < b >>>>> �ǿ����� a �� �ǿ����� b ���� �۴�
	>= : a >= b >>>>> �ǿ����� a �� �ǿ����� b���� ũ�ų� ����
	<= : a <= b >>>>> �ǿ����� a �� �ǿ����� b���� �۰ų� ����
	== : a == b >>>>> �ǿ����� a �� �ǿ����� b�� ����.
	!= : a != b >>>>> �ǿ����� a �� �ǿ����� b�� �����ʴ�.

	4. �� ������
	&& : and ����, a && b : a�� b ��� ���� �� 1 (true) ��ȯ
	|| : or ����, a || b : a�� b �� �ϳ��� ���� �� 1 (true) ��ȯ
	! : ����. �ǿ����ڰ� ���̸� ����, �����̸� ��.
	5. ��Ʈ ������ 
	�������͸� ��Ʈ������ ó���ϴ� ������. �ϵ����� �����ϰ� ���õ� ���� ó���� ���� ���ش�
	���޸� ������ �ٿ��� ������ �����ش�.
	����ǻ�ʹ� 0, 1�� ó���Ѵ�. 

	**��Ʈ�� 2���� �� �ϳ��� ������ �� �ִ� �ּ� �������(�޸� ����)�� �ǹ�.
	* 1��Ʈ�� ǥ���� �� �ִ� ������ ���� 1, 0 
	* 2��Ʈ�� 00, 01, 10, 11 > 4��, 3��Ʈ�� 2^3 8��
	* 1����Ʈ�� 8��Ʈ, 256���� ����� ���� ǥ���� �� �ִ� ����뷮�� ������.
		- 2���� : 0, 1 ���
		- 10���� : 0 ~ 10 ���� ���ڸ� ���
		- 16���� : 0 ~ 9 ������ ���ڿ� a, b, c, d, e, f������ ���ڸ� ���
			��16�������� a�� ���� 10�� �ǹ� b�� 11 ... f�� 15 �� �ǹ�
		- 8���� : 0 ~ 7 ������ ���ڸ� ���

	& : a & b // ��Ʈ���� AND ���� -> �ΰ��� ��Ʈ�� ��� 1�϶� 1�� ��ȯ
	| : a | b // ��Ʈ���� or ���� -> �ΰ��� ��Ʈ �� �ϳ��� 1�� �� 1�� ��ȯ
	^ : a ^ b // ��Ʈ���� xor ���� -> �ΰ��� ��Ʈ�� ���� ���� ������� 1�� ��ȯ
	~ : ~a -> // ��Ʈ���� not ���� -> ���������̶�� �ϸ� ��Ʈ�� ������Ŵ.
	<< : a << 3 // �������� ��Ʈ�� ��ĭ �̵� -> ��Ʈ�� �̵���Ŵ
	>> : a >> 3 // ���������� ��Ʈ�� ��ĭ �̵� -> ��Ʈ�� �̵�
	�� ��Ʈ�� ������ �Ǵ� ���� ���� �ű�� ����  2��, 1/2 �谡 �ȴ�.

	6. ���մ��� ������ (�����)
	+= : a += b
	-= : a -= b
	*= : a *= b
	/= : a /= b
	&= : a &= b
	|= : a |= b
	^= : a ^= b
	<<= : a <<= b
	>>= : a >>= b

	7. ���ǿ����� (���׿�����)
	�������ڰ� �ΰ� �� �ǿ����� ������ �̷������ ���׿�����
	a ? b : c
	a�� ���̸� ������� b, a�� �����̸� ������� c �� ��ȯ �� 

	��ø�ؼ� ����ϴ� ���� ����. ������ ������

 	*/

int main() {
	int a = 10;
	int b = 3;
	std::cout << "��� ������" << std::endl;
	std::cout << 1 + 2 << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a % b << std::endl;

	std::cout << "���� ������" << std::endl;
	int num = 10;
	std::cout << "num�� ����Ǿ� �ִ� ��" << num << std::endl;
	num++;
	std::cout << "num++ �� ����Ǿ� �ִ� �� : " << num << std::endl;
	++num;
	std::cout << "++num �� ����Ǿ� �ִ� �� : " << num << std::endl;
	num--;
	std::cout << "num-- �� ����Ǿ� �ִ� �� : " << num << std::endl;
	--num;
	std::cout << "--num �� ����Ǿ� �ִ� �� : " << num << std::endl;

	int num1 = 10;
	int num2 = 20;

	int c;
	int d;

	c = ++num1; //���� ���, �� ���� �� ����

	std::cout << "���� c�� ��" << c << "," << "���� num1�� �� : " << num1 << std::endl;

	d = num2++;

	std::cout << "���� d�� ��" << d << "," << "���� num1�� �� : " << num2 << std::endl;

	std::cout << "���迬����" << std::endl;

	int num3 = 1;
	int num4 = 2;

	int result;
	int result1;
	int result2;
	int result3;

	result = (num3 > num4);
	result1 = (num3 <= num4);
	result2 = (num3 == num4);
	result3 = (num3 != num4);

	std::cout << "result ������ ����� ��" << result << std::endl;
	std::cout << "result1 ������ ����� ��" << result1 << std::endl;
	std::cout << "result2 ������ ����� ��" << result2 << std::endl;
	std::cout << "result3 ������ ����� ��" << result3 << std::endl;

	//��������

	int num5 = 3;
	int num6 = 5;
	std::cout << "��������" << std::endl;

	int result4;
	int result5;
	int result6;

	result4 = (num5 > 0) && (num6 < 10);
	result5 = (num5 <= 2) || (num6 > 5);
	result6 = !num6;

	std::cout << "result4 �� ��� : " << result4 << std::endl;
	std::cout << "result5 �� ��� : " << result5 << std::endl;
	std::cout << "result6 �� ��� : " << result6 << std::endl;

	std::cout << "��Ʈ ������" << std::endl;

	int bitNum1 = 20;
	int bitNum2 = 16;

	int bitRes1 = bitNum1 & bitNum2;
	int bitRes2 = bitNum1 | bitNum2;
	std::cout << "��Ʈ ������ & ���" << bitRes1 << std::endl;
	std::cout << "��Ʈ ������ | ���" << bitRes2 << std::endl;

	int shiftNum = 10;
	int shiftRes = shiftNum << 2;
	std::cout << "��Ʈ ������ << ���" << shiftRes << std::endl;

	shiftRes = shiftRes >> 1;
	std::cout << "��Ʈ ������ >> ���" << shiftRes << std::endl;

	int x = 5;
	int y = 3;

	x += y;
	std::cout << x << std::endl;

	x += 2;
	std::cout << x << std::endl;

	x += 3;
	std::cout << x << std::endl;

	int number1 = 2;
	int number2 = 3;

	int numberResult;

	numberResult = (number1 > number2) ? number1 : number2;
	std::cout << "���� �������� ���" << numberResult << std::endl;
	return 0;
}

