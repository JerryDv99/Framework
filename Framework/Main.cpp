#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  // ����� ���

using namespace std;	// iostream�� ��Ʈ

//typedef struct tagInfo
//{
//	int iNumber;
//
//
//	tagInfo()	// ������, ����ü �ȿ����� ��� ����
//	{
//		cout << "�⺻ ������" << endl;	// �ʱ�ȭ �� ������ ȣ��
//	};
//
//	tagInfo(int _iNumber)
//	{
//		iNumber = _iNumber;
//		cout << "���� ������" << endl;	// �ʱ�ȭ �� ������ ȣ��
//	};
//
//
//}INFO;

typedef struct tagVector3
{
	int x, y, z;

	tagVector3() {};	//	�⺻ ������ ���̴�

	tagVector3(int _x, int _y)	// ���� �����ڸ� ���� �� ����
		: x(_x), y(_y), z(0) { };

	tagVector3(int _x, int _y, int _z)
		: x(_x), y(_y), z(_z) { };


}Vector3;

int main(void)
{
	// ** ���
	//printf_s("���� ���");
	//cout << "���� ���";		// console out <<(����Ʈ ������) "���ڿ�"		

	//���� ��������  << ������, >> �ޱ�


	// ** �ٹٲ�
	//printf_s("\\n�� ����ϸ� \n�ٹٲ�");
	//cout << "endl �� ����ϸ�" << endl << "�ٹٲ�";


	/*
	// ** �Է�
	int iNumber = 0;


	printf_s("�Է�: ");
	scanf("%d", &iNumber);

	printf_s("��� : %d", iNumber);

	cout << "�Է�: ";
	cin >> iNumber;

	cout << "��� : " << iNumber;
	*/

	// ** �����Ҵ� 
	//INFO* pInfo = (INFO*)malloc(sizeof(INFO));		// malloc�� ���°� void* �̱� ������ ����ȯ
	//INFO* pInfo = new INFO;	// new�� �����Ҵ�, new ���� INFO�� size �� ����
	//INFO* pInfo = new INFO(10);
	//cout << pInfo->iNumber << endl;


	//free(pInfo);
	//delete pInfo;
	/*INFO* pInfo[10];

	for (int i = 0; i < 10; ++i)
	{
		pInfo[i] = new INFO(i);
		cout << pInfo[i]->iNumber << endl;
	}*/

	//for (int i = 0; i < 10; ++i)
		//cout << pInfo[i]->iNumber << endl;

	Vector3 vPosition = Vector3(10, 20, 30);

	return 0;
}