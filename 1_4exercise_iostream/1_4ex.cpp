#include<iostream>

int main()
{
	using namespace std;
	
	//cout ����
	cout << "I love this lecture" << endl;

	int x = 1024;
	double pi = 3.141592;
	cout << "x is " << x << " pi is " << pi << endl;
	/*�� �ڵ带 ��������� ��� pi�� 3.14159�� ������ 2�� ����� ����?
	-> ���͵� �ı����� ģ���� �亯 ����մϴ�.*/

	
	//\t�� ���ӻ�
	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	
	//cin ����
	int y = 1;
	cout << "Before your input, y was " << y << endl;
	cin >> y;
	cout << "And your input is " << y << endl;
	//���� ���⼭ 10000....0000 �̶� ū ���ڸ� ��ǲ�ϰ� �Ǵ� ��� ��� �Ǵ°�?
	//������� �ٸ��ٸ� ��������?

	
	//\a�� �̿�
	cout << "\a" << endl;

	return 0;
}