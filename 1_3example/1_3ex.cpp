#include<iostream>

int main()
{
	int x = 1;
	x = x + 2;

	std::cout << x << std::endl;

	int y = x;
	std::cout << y << std::endl;

	//is (x+y)is l-value or R-value? 
	std::cout << x + y << std::endl;
	//x+y �� r����̴� �ֳ��ϸ� ������ ������ �ʱ�ȭ�� �ȵ��ֱ� �����̴�.
	std::cout << x << std::endl;

	int z;
	std::cout << z << std::endl;
	//���⼭ ���� z�� �ʱ�ȭ�� �ȵǾ� �ִ� ���� ����� ������ ����, ������ ���� ���� ������� 
	//�������Ͽ��� z�������� 0�� ���� �ȴ�.
	//MSDN �о�ϱ� ������ ������ �´µ� ������ ������
	return 0;

}