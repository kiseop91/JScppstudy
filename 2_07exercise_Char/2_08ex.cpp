#include<iostream>
using namespace std;

int Ascii(char a)
{
	return int(a);
}

int main()
{
	cout << " ���ڸ� �Է¹޾� Ascii ���ڷ� ��ȯ�մϴ�.\n 0�� �����ٸ� \n\t ���� �˴ϴ�.^^\n";
	while (1)
	{
		char a;
		cout << "���ڸ� �Է��Ͻÿ�" << endl;
		cin >> a;

		if (a == '0')
		{
			cout << '\a' << endl;
			break;
		}
		
		else
			cout << Ascii(a) << endl;

		
	}
	return 0;
}