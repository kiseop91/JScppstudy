#include<iostream>
using namespace std;

//������(operator)�� ����
int main()
{	
	//������ ������ �ǹ��ϴ� literal
	//�������� ����� �Ǿ����� �ǿ�����(operand)
	//+,-,*,/ ���� ���׿�����(binary)
	int x = 2;
	cout << 1 + 2 << endl;
	cout << x + 2 << endl;

	//true,false�� ���� 3�׿�����(ternary)
	int y = (x > 0) ? 1 : 2;
	cout << y << endl;

	x = -2;
	y = (x > 0) ? 1 : 2;
	cout << y << endl;
	
	x = 2;
	x = -x; //-x, �� ���� literal ó�� �۵��ϴ��� ����, ����� �۵���
	y = (x > 0) ? 1 : 2;
	cout << y << endl;

	return 0;

}