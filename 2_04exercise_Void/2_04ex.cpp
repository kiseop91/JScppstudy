#include<iostream>

void my_function()
{
	//return�� ���� �Ű������� ����. ��, ������ ������ �ִ�.
}

int main()
{
	//void my_void;  // void Ÿ������ ���������� �Ҽ��� ����. 

	int i = 123;
	float f = 123.456f;

	void *my_void2; // *�� �����ͷ� �ּҸ� ����Ų��.

	my_void2 = (void*)&i;	// &i�� ����i�� �ּҴ�.
	my_void2 = (void*)&f;	// �̿� ���� �ּҰ��� void�� �ڷ�� ����ȯ �ϴ°��� �����ϴ�.

	return 0;
}