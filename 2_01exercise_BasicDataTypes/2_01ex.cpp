#include<iostream>
using namespace std;

int main()
{
	bool bValue = true;
	cout << (bValue ? 1 : 0) << endl;
	cout << bValue << endl;         // 1�� ���

	char chValue = 'A';
	cout << (int)chValue << endl;   // 65�� ���

	char chValue2 = 65;
	cout << chValue2 << endl;        // ??

	float fValue = 3.141592f;        // float�� ���ڵڿ� f�� ���־����
	double dValue = 3.141592;        // f�� �Ⱥ����� double
	cout << fValue << endl;
	cout << dValue << endl;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	cout << sizeof(aValue) << endl;  // 8
	cout << sizeof(aValue2) << endl; // 4

	return 0;
}