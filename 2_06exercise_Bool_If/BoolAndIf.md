##Bool �� If

<br>

### ����
bool�� ������ �ִ� ���� true, 1�� false 0 �ۿ� ����.

<br>

### �ʱ�ȭ
bool�� �ٸ� �ڷ����� ���������� ����, �ʱ�ȭ�� �Ҽ��ִ�.

	#include<iostream>

	int main()
	{
		using namespace std;

		bool b1 = true; // copy initialization
		bool b2(false); // direct initialization
		bool b3{true}; // uniform initialization
		b4 = false

		cout << b3 << endl; // 0
		cout << b1 << endl;	// 1

		//true false�� ����ʹٸ�?
		cout << std::boolalpha;
		cout << b3 << endl; // 0
		cout << b1 << endl;

		//not operator
		cout << !true << !b1 << endl;
		cout << !false << !b2 << endl; 

		return 0;
	}
>not operator !�� ���� ���꿡�� �����ϸ� �Ⱦ��°��� ������, ���� �ʴ´�.

<br>

### �� ������
1. && : and ������
2. || : or ������
3. �������� ������ ��������� ����.

	#include<iostream>

	int(main)
	{
		cout << std::boolalpha;
		cout << true && ture << endl;   // true
		cout << true && false << endl;	// false
		cout << true || false << endl;	// true
		cout << false || false << endl;	// false

		return 0;
	}

<br>

### if��

	#include<iostream>

	int(main)
	{
		if (false)		
			cout << "this is true" << endl;
		
		else
		{
			cout << "this is false" << endl;
		}
		
		return 0;
	}

1. ������ if (����) {����} (�� ����� 1���϶��� {}�� �Ƚᵵ�ȴ�.)
2. ������ boolŸ�Կ� ���� ������ ���� �ȵ����� �����̵ȴ�.
3. else�� if�� �ƴҶ� ����ȴ�.
4. ���ǹ����� 0�� false ������ �� �̿��� �͵��� ��� true��.
   �ٽø��ؼ� if (5) �� ����, true�� �Ǵ� ���̴�.

<br>

### bool�ڷ����� �̿�

###### �Լ��� ����
	#include<iostream>

	bool isEqual(int a, int b)
	{
		bool result = ( a == b );
		return result;
	}

	int main()
	{
		cout << std::boolalpha;
		cout << isEqual(1, 1) << endl;
		cout << isEqual(1, 2) << endl;

		return 0;
	}
>bool �ڷ����� �Է¹����� ���� �״�� true, false�� �Է��ϸ� �ȵȴ�.
0�� �ƴ� ��� ���ڿ� ���� true�� �޾Ƶ��̱� �����̴�.

<br>

### ����
+���� �ϳ��� �Է¹ް� �׼��ڰ� Ȧ������ ¦������ ����ϴ� ���α׷��� ����� ���ô�.

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