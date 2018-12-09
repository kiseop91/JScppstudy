## �ε��Ҽ��� �� Floating Point Numbers

<br>

####����

���� Category| �� Type| �ּ� ũ�� | �������� ũ��

=============|=========|==========|================
�ε��Ҽ��� Floating point | float | 4byte | 4byte
<br>| double| 8byte | 8byte
<br> | long double | 8byte | 8,12,16 byte

1. double�� float�� 2�迩�� �����̴�. 
2. long double ���� 8byte�� �ּұ԰��̴�. �ֱٿ� ��ǻ�� ������ double�� ���� ���������, �Ϲ������� ������ ������� Ÿ���� float�̴�.

��ȣ sign | ���� exponent | ���� mantissa
==========|===============| ===============
0 | 000000111| 110000000000000000000000
+ | 2^0 + 2^1 + 2^2 + = 7 | 2 ^-1 + 2^-2 = 0.5 + 0.25 = 0.75 

(���� �κ��� ���� ���� ������ ǥ���ȴ�.)
+(1+0.75)*2^(7-127) = +1.316554*10^-36

<br>

### �� ������ ũ��

	#include<iostream>
	#include<iomanip>
	#include<limits>


	int main()
	{
		using namespace std;
		float f;
		double d;
		long double ld;
	
		cout << sizeof(f) << endl;
		cout << sizeof(d) << endl;
		cout << sizeof(ld) << endl;	// d�� ld�� ����. ���̴� ���� ���ϱ�?
		
		cout << numeric_limits<float>::max() << endl;
		cout << numeric_limits<double>::max() << endl;
		cout << numeric_limits<long double>::max() << endl;

		cout << numeric_limits<float>::min() << endl;
		cout << numeric_limits<double>::min() << endl;
		cout << numeric_limits<long double>::min() << endl;   // ���� ǥ���� �ȵǴ� ���ΰ�?

		cout << numeric_limits<float>::lowest() << endl;
		cout << numeric_limits<double>::lowest() << endl;
		cout << numeric_limits<long double>::lowest() << endl;
		
		return 0;
	}

1. sizeof�� ���� double�� longdouble�� ������ ����.
2. numeric_limits<>::min�� ǥ�������� �������� ���� ���� �ǹ��Ѵ�.
3. numeric_limits<>::lowest�� ǥ�������� ���� ���� ���̴�.

<br>

#### float�� �ʱ�ȭ
	#include<iostream>

	int main()
	{
		using namespace std;

		float f(3.141592f); 
		float f(31.4e-1f);

		/*cf) e������ ���� ǥ��
		cout << 3.14 << endl;
		cout << 31.4e-1 << endl; // e�� 10�� �ǹ��Ѵ�. �� 10�� -1���� �ǹ�
		cout << 31.4e-2 << endl;
		cout << 31.4e1 << endl;
		cout << 31.4e2 << endl;  */
	}

>����! float�� �ڷ����϶��� ���ڵ�(���ͷ�)�� f�� �־� �־�� �Ѵ�. �׷��� ������ �ڷ����� double�� casting �Ѵ�.

<br>

### �ε��Ҽ��� ����Ҷ� ���ǻ���

###### 1. ������ ��������

	#include<iostream>
	#include<iomanip>  // iostream������ �����Ҽ� �ְ����ִ� ��ó����
	
	int main()
	{
		using namespace std;
		cout << std::setprecision(16); // �Ҽ��� ������ 16�ڸ����� ��� �ǹ��� �Լ��̸�, defalt���� 8�̴�.
		cout << 1.0 / 3.0 << endl;
		
		float f(123456789.0f) // 10 significant digits

		cout << std::setprecision(9);
		cout << f << endl;  // 123456792���
		
		double d(0.1);

		cout << d <<endl;
		cout << std::setprecision(27)
		cout << d << endl; // 0.10000000000000000001 �������� ǥ���Ҽ� �ִ� ���� ������
		
		double d1(1.0)
		double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

		cout << std::setprecision(17);
		cout << d1 << endl;	// 0.1
		cout << d2 << endl;	// 0.999999999999989

		return 0;
	}
1. ��ǻ�� ���ο��� �۵��ϴ°��� �츮�� �������� �ٸ����ִ�.
2. �ε��Ҽ����� ��Ÿ���� ������ �׼��ڸ� ��ȯ�ϴ� ���� �׼��� ���� ����� 2�����̴�.
3. �̷����� ������ �߻��ϴ� ������ ��ǻ�Ͱ� 2������ ������ ó���� �ϱ⶧���̸�, ��ǻ�� ���󿡼��� �翬�� �����̴�.
4. ���� ���� ������ ������ ������ ����ϰ� �Ǹ� ������ ������ �Ͼ�� �׷��� ����� �� ũ�� �ۿ��� �� �ִ�.

<br>

### 2. ���������� �Ұ����� ����

	int main()
	{
		double zero 0.0;
		double posinf = 5.0 / zero;
		double neinf = -0.5 / zero;
		double nan = zero / zero;

		cout << posinf << endl; // inf
		cout << neinf << endl; // -inf
		cout << nan << endl; // -nan(ind)
		
		return 0;
	}	
1. inf�� infinite �� �����̶���, nan�� not a number �� �Ҵ��̶�¶�.
2. ���α׷��� �������� �̷��� ���� ������ �ȵȴ�!(�ǵ����������̻�) 
3.	�̷��� ���� �������� �ʳ������� Ȯ���� ���ƾ��Ѵ�. (�˻��� �غ���!)
<br>
###### Ȯ�� �ڵ�
	#include<iostream>
	#include<cmath>

	int main()
	{
		double zero 0.0;
		double posinf = 5.0 / zero;
		double neinf = -0.5 / zero;
		double nan = zero / zero;

		cout << posinf << "" << std::isnan(posinf) << endl;
		cout << neinf << "" << std::isnan(neinf) << endl;
		cout << nan << << "" << std::isnan(nan) << endl;
		cout << 1.0 << "" << std::isnan(1.0) << endl;
	}
1. std::isnan - ��µǴ� ���ڰ� nan ���� true, false�� ��ȯ
2. std::isinf - ��µǴ� ���ڰ� inf ����
3. std::isneinf - ��µǴ� ���ڰ� inf ����
