## ������ Integers

<br>

### ũ��

���� Category|�� Type | �ּ� ũ�� | ��Ÿ
-------------|--------|---------|------------
���� character|char|1byte|
���� integer | Short | 2byte|
<br> | int | 2byte | ��κ� 4byte
<br> | long | 4byte | 
<br> | long long | 8byte | c99/c++11 type

>cf)���� ���α׷��� Ư�� ��Ʈ��ũ�� ����ϴ� ���α׷����� ���, charŸ���� �ּ�ũ�� ����� �������� ����ϴ� ��찡 ����.

<br>

### ���屸��
int i = 1;
0000000 | 0000000 | 00000000 | 00000001 (���� �޸𸮿� ����Ǵ� i�� ����)
Int �ڷ����� ��� �� 4byte�� �� ���ڸ� �����ϸ�, �Ǿ��� �� ��Ʈ�� ��ȣ�ǵ�(0�Ͻ� ���, 1�Ͻ� ����)�� ����Ѵ�

<br>

###ũ�� Ȯ���� ���� �ڵ�

###### int�� �ڷ���� ũ�� Ȯ��
	#include<iostream>

	int main()
	{
		using namespace std;
		short     s = 1;
		int		  i = 1;
		long	  l = 1;
		long long ll = 1;

		cout << sizeof(short) << endl;
		cout << sizeof(int) << endl;
		cout << sizeof(long) << endl;
		cout << sizeof(long long) << endl;

		return 0;
	}
short�� 4byteũ���̹Ƿ� 16bit�̴�. �׷��ٸ� �� 2�� 16�� ������ ��ŭ ���� ǥ���Ҽ��ִ°�? 
�ƴϴ�. �Ǿ��� �Ѻ�Ʈ�� ��ȣ�� ǥ���ؾ� �ϹǷ� ��밡���� ��Ʈ���� 15���� �Ǹ� ���� 0�� �����ؾ� �Ѵ�. 
�� ǥ�� ������ ���� �������� 2�� 15�� ���� 1, �� 32767���� ���̴�.


######  short ���� Ȯ�� �ڵ�
	#include<iostream>
	#include<cmath>
	#include<limits>

	int main()
	{
		using namespace std;
		short s = 1;
		cout << std::pow(2, sizeof(short)*8-1)-1 << endl;
		cout << std::numeric_limits<short>::max() << endl;
		cout << std::numeric_limits<short>::min() << endl;
		cout << std::numeric_limits<short>::lowest() << endl;  // lowest�� min�� ����?

		return 0;
	}
1.pow(x , y)�Լ��� x�� y���� ������ִ� �Լ��̴�.
2.numeric_limits<short>�� �ڷ����� ������ ����� �ִ� �Լ��̴�.

<br>

### Overflow

�޸𸮿� ������ �ڷ����� ũ�Ⱑ �� �Ѱ�ġ�� �Ѿ����� �߻��ϴ� �����̴�. ���� ��� �Ǵ��� �ڵ�� Ȯ���� ����.

###### Overflow�� �߻���Ű�� �ڵ�
	
	#include<iostream>
	#include<cmath>
	#include<limits>

	int main()
	{
		using namespace std;

		short s = std::numeric_limits<short>::max();
		cout << s+1 << endl;
		
		s=std::numeric_limits<short>::min();
		cout << s-1 << endl;

		return 0;
	}