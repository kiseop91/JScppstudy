#include<iostream>
#include<limits>
int main()
{
	using namespace std;

	std::int16_t i(5);			  // short Ÿ������ ����ȴ�.
	std::int8_t myint = 65;		  // char Ÿ������ �����ȴ�.

	cout << myint << endl;
	cout << std::numeric_limits<int8_t>::max() << endl;  // char Ÿ���̱� ������ �ִ� ������ ����� ǥ������ ����.
	cout << std::numeric_limits<int16_t>::max() << endl;

	std::int_fast8_t fi(5);           // 8bit ������ �߿� ���� ���� ������ Ÿ�� (charŸ������ ����ȴ�.)
	std::int_least64_t fi_2(5);          // ��� 64bit�� ���� ������ Ÿ�� (_int64Ÿ������ �����ȴ�.)

	cout << sizeof(fi) << " " << sizeof(fi_2) << endl;

	return 0;
}