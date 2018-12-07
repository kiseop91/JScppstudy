1_14�� ��ó�����?
================

0. ��ó������ �۵��� ���
-----------------------------
��ó����� ���尡 �Ǳ����� �۵��� �ȴ�.  �ַ� �ü����(���Ǵ� �����Ϸ���) window�� linux�� ���������� ����Ѵ� �ִ�.

1. ��ó���� #define
-----------------------------
��ũ�� ��� �Ҹ���� �����ڴ� �빮�ڷ� ����, �� �ڿ� ����(�ڷ����� �������� ����)�� �Ѵ�. ��Ȱ�� �ڵ峻���� define�� �����ڸ� ��������, �����Ƿ� ��ü ���شٴ� ���̴�. ���򿡴� #define ���ٴ� �Լ��� ���� ����.
	
	#include<iostream>
	using namespace std;
	
	#define MY_NUMBER 9 
	#define MAX(a, b) (((a)>(b)) ? (a) : (b))  // 3�� ������, ���� a �� 1 + 2 ��� �����̶�� a�� �����Ǵ� ���� ��ȣ������ ������ ���� ()�� ���ش�.	    
	

	
	int main()
	{
		cout << MY_NUMBER << endl;  // 9�� ��µ�
		cout << MAX(1, 2) << endll // 2�� ��µ�
	
		return 0;	
	}

2. ��ó���� #include<algorithm>
------------------------------------------
()�ȿ� ����ū ���� �������ִ� �Լ� std::max�� ����Ҽ� �հ� ���ش�.
	
	#include<iostream>
	#include<algorithm>
	using namespace std;
	
	int main()
	{
		cout << std::max(1 + 3 , 2) << endl; // 4�� ��µ�
		return 0;
	}
	

3. ��ó������ ȿ�¹���
--------------------------------------
��ó������ ȿ�¹����� ��ó���Ⱑ ������ �� cpp ���� �ȿ������̴�. �̰��� Ȯ���غ��� ���� �Լ��� ���캸��.

#### �ַ��1�� preprocessor.cpp
	
	#include<include>
	#define LIKE_APPLE
	void dosomething();
	
	int main()
	{
		dosomething();
		return 0;
	}

cf) #define LIKE_APPLE �ڿ� �ƹ��͵� ���⋚���� ���� �Ȱ� �ƴ��� �ʴ���?
��ó���� �ȿ����� �׷��� �۵�����(�ڿ� ���Ƿ� ��ü�� ��������) �ʱ� ������ �ϴ��� ���� �Ȱ����� �����Ѵ�.

#### �ַ��1�� function.cpp
	
	#include<iostream>
	using namespace std;
	
	void dosomething()
	{
	#ifdef LIKE_APPLE                              
		cout << "Apple " << endll;
	#else
		cout << "Orange" << endl;
	#enif
	}


�̰�쿡 �����Լ��� �ִ� preprocessor.cpp���� LIKE_APPLE�� define �Ǿ��־� ��ġ APPLE�� ���ð� ������, �Լ� dosomething�� ���ǵ� function.cpp ������ ��ó����� define �Ǿ� ���� �ʱ� ������ ORANGE�� ����̵ȴ�.




