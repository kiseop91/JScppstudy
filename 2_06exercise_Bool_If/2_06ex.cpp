#include<iostream>
using namespace std;

void Is_Equal_Odd(int a)
{
	if (a % 2 == 0)
		cout << "¦���Դϴ�" << endl;

	else
		cout << "Ȧ���Դϴ�" << endl;
}

int main()
{
	int a;
	cin >> a;
	Is_Equal_Odd(a);

	return 0;
}