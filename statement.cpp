/******
switch ��
- �������� ������ ó���ؾ��� �� ����ϴ� ���ǹ� �� �ϳ�
- �ַ� ������� �������� �б��� �� ����Ѵ�.�������� ����.

[switch]
- �ϳ��� ������ �˻��ϰ� �� ������ ���� ���� ���� case��� �� �ϳ��� ����
- breakŰ���带 ���� �� case�� ������ ����
- break�� ������ ���� case ����� �����ؼ� ���� ��.
- ǥ���Ŀ��� ����, ����, ����Ÿ�� ���� �ִ�.

[���]
- ��� ���� �������� ���� ������ �� �ϳ��� �����ϴ� ��Ȳ���� ����ϱ� ����.
- �ڵ��� �������� ���̰� ȿ������ ������ ���� ������ ǥ������ ������ �ִ�.
- ������� �񱳴� �Ұ� (10 < x < 20 ��)
- if���� ���������� �پ��� ������ �ٷ�⿡ ����, �������ڸ� ����Ͽ� ������ ������ �ٷ� �� �ִ�.

[break]
�ݺ����̳� ������ ������ �� ���.
******/

#include<iostream>
int main() {
	//int a;

	//std::cout << "������ �����ϼ���" << std::endl;
	//std::cout << "1. ��" << std::endl;
	//std::cout << "2. ��ƺ��2" << std::endl;
	//std::cout << "3. �߷ζ�Ʈ" << std::endl;
	//std::cout << "4. ��Ÿũ����Ʈ" << std::endl;
	//std::cout << "5. ������ġ" << std::endl;

	//std::cin >> a;

	//switch (a)
	//{
	//case 1 : 
	//	std::cout << "�� ����" << std::endl;
	//	break;
	//case 2:
	//	std::cout << "��ƺ��2 ����" << std::endl;
	//	break;
	//case 3:
	//	std::cout << "�߷ζ�Ʈ ����" << std::endl;
	//	break;
	//case 4:
	//	std::cout << "��Ÿũ����Ʈ ����" << std::endl;
	//	break;
	//case 5:
	//	std::cout << "������ġ ����" << std::endl;
	//	break;
	//default: std::cout << "�Է°��� �߸� ��." << std::endl;
	//	break;
	//}

	//int jobChoice;
	//int skillChoice;

	//std::cout << "������ �����Ͻÿ� : " << std::endl;

	//std::cin >> jobChoice;

	//switch (jobChoice)
	//{
	//case 1 : std::cout << "����" << std::endl;
	//	std::cout << "��ų �����Ͻÿ� : " << std::endl;

	//	std::cin >> skillChoice;
	//	switch (skillChoice)
	//	{
	//	case 1 : std::cout << "�뽬" << std::endl;
	//		break;
	//	case 2 : std::cout << "���" << std::endl;
	//		break;
	//	case 3 : std::cout << "ü������" << std::endl;
	//		break;

	//	default:
	//		break;
	//	}
	//	break;
	//case 2 : std::cout << "������" << std::endl;
	//	std::cout << "��ų �����Ͻÿ� : " << std::endl;

	//	std::cin >> skillChoice;
	//	switch (skillChoice)
	//	{
	//	case 1: std::cout << "����" << std::endl;
	//		break;
	//	case 2: std::cout << "���׿�" << std::endl;
	//		break;
	//	case 3: std::cout << "��������" << std::endl;
	//		break;

	//	default:
	//		break;
	//	}
	//	break;
	//case 3 : std::cout << "�ü�" << std::endl;
	//	std::cout << "��ų �����Ͻÿ� : " << std::endl;

	//	std::cin >> skillChoice;
	//	switch (skillChoice)
	//	{
	//	case 1: std::cout << "����" << std::endl;
	//		break;
	//	case 2: std::cout << "�ӻ�" << std::endl;
	//		break;
	//	case 3: std::cout << "��������" << std::endl;
	//		break;

	//	default:
	//		break;
	//	}
	//	break;
	//default:
	//	break;
	//}

	//���� 2 �� ������ �Է� �޴´�. 
	// 2.1.�� ������ ��Ģ������ �ϴ� ���α׷��� �ۼ��Ѵ�.
	// 2.2 �Է¹��� �� �������� ù��° �Է¹��� ���� ũ�ٸ� +, �ι� ° ���� �� ũ�ٸ� -
	//���� 3 ���� �����ϴ� ������ ����.
	// if������ �Ѱ� switch������ �Ѱ�
	// ������ ���� �ߴٸ� �� ������ ĳ���͸� �����ؼ� ����Ѵ�.
	// ex) 

	//2.1
	int fNum;
	int sNum;
	std::cout << "ù�� ° ������ �Է��ϼ���" << std::endl;
	std::cin >> fNum;
	std::cout << "�ι� ° ������ �Է��ϼ���" << std::endl;
	std::cin >> sNum;

	if (fNum > sNum) {
		std::cout << "ù ��° ������ �� ũ�Ƿ� + ������ �����մϴ�. ������� : " << fNum + sNum << " �Դϴ�" << std::endl;
	}
	else {
		std::cout << "�� ��° ������ �� ũ�Ƿ� - ������ �����մϴ�. ������� : " << fNum - sNum << " �Դϴ�" << std::endl;
	}

	//3.1
	int gNum1;
	int cNum1;

	std::cout << "if ���� Ȱ���� 3�� ���� �Դϴ�." << std::endl;
	std::cout << "�����ϴ� ������ �Է��Ͻÿ�" << std::endl << "1. ��" << std::endl << "2. ��Ÿ" << std::endl << "3. ��ġ" << std::endl;
	std::cin >> gNum1;
	if (gNum1 == 1) {
		std::cout << "�����ϴ� ������ �� �Դϴ�." << std::endl;
		std::cout << "�����ϴ� ĳ������ ��ȣ�� �Է��Ͻÿ�" << std::endl << "1. ����" << std::endl << "2. ���ֳ̾�" << std::endl << "3. �� ¥��" << std::endl;
		std::cin >> cNum1;
		if (cNum1 == 1) {
			std::cout << "���� �����ϴ� ������ �� �̰� �����ϴ� ĳ���ʹ�" << "����" << "�Դϴ�." << std::endl;
		}
		else if (cNum1 == 2) {
			std::cout << "���� �����ϴ� ������ �� �̰� �����ϴ� ĳ���ʹ�" << "���ֳ̾�" << "�Դϴ�." << std::endl;
		}
		else if (cNum1 == 3) {
			std::cout << "���� �����ϴ� ������ �� �̰� �����ϴ� ĳ���ʹ�" << "�� ¥��" << "�Դϴ�." << std::endl;
		}
		else {
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
		}

	} else if (gNum1 == 2) {
		std::cout << "�����ϴ� ������ ��Ÿ �Դϴ�." << std::endl;
		std::cout << "�����ϴ� ������ ��ȣ�� �Է��Ͻÿ�" << std::endl << "1. �׶�" << std::endl << "2. �����佺" << std::endl << "3. ����" << std::endl;
		std::cin >> cNum1;
		if (cNum1 == 1) {
			std::cout << "���� �����ϴ� ������ ��Ÿ �̰� �����ϴ� ������" << "�׶�" << "�Դϴ�." << std::endl;
		}
		else if (cNum1 == 2) {
			std::cout << "���� �����ϴ� ������ ��Ÿ �̰� �����ϴ� ������" << "�����佺" << "�Դϴ�." << std::endl;
		}
		else if (cNum1 == 3) {
			std::cout << "���� �����ϴ� ������ ��Ÿ �̰� �����ϴ� ������" << "����" << "�Դϴ�." << std::endl;
		}
		else {
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
		}

	} else if (gNum1 == 3) {
		std::cout << "�����ϴ� ������ ��ġ �Դϴ�." << std::endl;
		std::cout << "�����ϴ� ĳ������ ��ȣ�� �Է��Ͻÿ�" << std::endl << "1. �޸���" << std::endl << "2. �Ƴ�" << std::endl << "3. ����" << std::endl;
		std::cin >> cNum1;
		if (cNum1 == 1) {
			std::cout << "���� �����ϴ� ������ ��ġ �̰� �����ϴ� ĳ���ʹ�" << "�޸���" << "�Դϴ�." << std::endl;
		}
		else if (cNum1 == 2) {
			std::cout << "���� �����ϴ� ������ ��ġ �̰� �����ϴ� ĳ���ʹ�" << "�Ƴ�" << "�Դϴ�." << std::endl;
		}
		else if (cNum1 == 3) {
			std::cout << "���� �����ϴ� ������ ��ġ �̰� �����ϴ� ĳ���ʹ�" << "����" << "�Դϴ�." << std::endl;
		}
		else {
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
		}
	}
	else {
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}

	//3.2
	int gNum2;
	int cNum2;

	std::cout << "switch���� Ȱ���� 3�� ���� �Դϴ�." << std::endl;
	std::cout << "�����ϴ� ������ ��ȣ�� �Է��Ͻÿ�" << std::endl << "1. ��" << std::endl << "2. ��Ÿ" << std::endl << "3. ��ġ" << std::endl;
	std::cin >> gNum2;
	switch (gNum2)

	{
		case 1 :
			std::cout << "�����ϴ� ĳ������ ��ȣ�� �Է��Ͻÿ�" << std::endl << "1. ����" << std::endl << "2. ���ֳ̾�" << std::endl << "3. �� ¥��" << std::endl;
			std::cin >> cNum2;
			switch (cNum2) {
				case 1: std::cout << "�����ϴ� ������ �� �̰� �����ϴ� ĳ���ʹ� ���� �Դϴ�." << std::endl;
					break;
				case 2 : std::cout << "�����ϴ� ������ �� �̰� �����ϴ� ĳ���ʹ� ���ֳ̾� �Դϴ�." << std::endl;
					break;
				case 3 : std::cout << "�����ϴ� ������ �� �̰� �����ϴ� ĳ���ʹ� �� ¥�� �Դϴ�." << std::endl;
					break;
				default:
					break;
			}
			break;
		case 2 :
			std::cout << "�����ϴ� ������ ��ȣ�� �Է��Ͻÿ�" << std::endl << "1. �׶�" << std::endl << "2. �����佺" << std::endl << "3. ����" << std::endl;
			std::cin >> cNum2;
			switch (cNum2) {
			case 1: std::cout << "�����ϴ� ������ ��Ÿ �̰� �����ϴ� ������ �׶� �Դϴ�." << std::endl;
				break;
			case 2: std::cout << "�����ϴ� ������ ��Ÿ �̰� �����ϴ� ������ �����佺 �Դϴ�." << std::endl;
				break;
			case 3: std::cout << "�����ϴ� ������ ��Ÿ �̰� �����ϴ� ������ ���� �Դϴ�." << std::endl;
				break;
			default:
				break;
			}
			break;
		case 3 :
			std::cout << "�����ϴ� ĳ������ ��ȣ�� �Է��Ͻÿ�" << std::endl << "1. �޸���" << std::endl << "2. �Ƴ�" << std::endl << "3. ����" << std::endl;
			std::cin >> cNum2;
			switch (cNum2) {
			case 1: std::cout << "�����ϴ� ������ ��ġ �̰� �����ϴ� ĳ���ʹ� �޸��� �Դϴ�." << std::endl;
				break;
			case 2: std::cout << "�����ϴ� ������ ��ġ �̰� �����ϴ� ĳ���ʹ� �Ƴ� �Դϴ�." << std::endl;
				break;
			case 3: std::cout << "�����ϴ� ������ ��ġ �̰� �����ϴ� ĳ���ʹ� ���� �Դϴ�." << std::endl;
				break;
			default:
				break;
			}
			break;
	default:
		break;
	}

	std::cout << "�� �Դϴ�." << std::endl;
} 