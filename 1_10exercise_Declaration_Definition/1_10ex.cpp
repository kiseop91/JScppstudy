#include<iostream>
using namespace std;

//�̷��� ���� �Լ� ���� �Լ��� �����ϴ� ���� ���漱��(Declaration) �̶�� �Ѵ�.
int Add(int a, int b); 
int Subtract(int a, int b);
int Multi(int a, int b);

int main()
{
	cout << Add(1, 2) << endl;
	cout << Subtract(1, 2) << endl;
	cout << Multi(1, 2) << endl;

	return 0;
}

//���� �Լ��� ����κ��� ����(Definition)�̶�� �Ѵ�.
int Add(int a, int b)
{
	return a + b;
}

int Subtract(int a, int b)
{
	return a - b;
}

int Multi(int a, int b)
{
	return a * b;
}