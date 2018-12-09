#include<iostream>
#include<cmath>
#include<limits>

int main()
{
	using namespace std;

	short     s = 1;
	int		  i = 1;
	long	  l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << std::pow(2, sizeof(short) *8 - 1) - 1 << endl; // ���� ����� �����ϴ� �Լ� pow
	cout << std::numeric_limits<short>::max() << endl;	// �ڷ����� ������ �ּ�, �ִ븦 ����ϴ� �Լ� numeric_limits
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;  // lowest�� min�� ����?
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	short s2 = std::numeric_limits<short>::max();
	cout << "�ִ� s��" << s2 << " s+1��" << s2 + 1 << endl;
	s2 = std::numeric_limits<short>::min();
	cout << "�ּ� s��" << s2 << " s-1��" << s2 - 1 << endl; // �� ���� ����.. ������ �߸��Ǿ���?

	return 0;
}
