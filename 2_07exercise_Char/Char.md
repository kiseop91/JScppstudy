## 2-7 ������

��ǻ�� ���ο��� ���� ���ڷ� ǥ��
���ڸ� ��� ���ڷ� ǥ���ϳ�?
<br>
### �ƽ�Ű���̺� 

1.� ���ڰ� � ���ڿ� ������ �Ǵ��� ���س���
2. 1~32 unprintable
3. 33~ ���� Ȥ�� Ư����ȣ
<br>
### char�� ��뿹

	include<iostream>
	include<limits>

	int main()
	{
		using namepace std;

		char c1(65);
		char c2('a') // �ѱ��ڴ� ''���
		char c3("Hello, world") // ���ڿ����� ""���
		
		cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl; // int������ char�� ĳ����

		//c style ĳ����
		cout << (char)65 << endl;
		cout << int'A' << endl;

		//cpp style ĳ����
		cout << char(65) << endl;
		cout << int('A') << endl;

		//static ĳ��Ʈ
		cout << static_cast<char>(65) << endl;
		cout << static_cast<int>('A') << endl;

		char ch(97);
		cout << ch <<endl;
		cout << static_cast<int>(ch) << endl;
		cout << ch << endl;

		// char type�� ����
		char c1(65);
		cout << sizeof(char) << endl;
		cout << (int)numeric_limits<char>::max() << endl;
		cout << (int)numeric_limits<char>::lowest() << endl;	// 127

		// unsigned char type�� ����
		char c1(65);
		cout << sizeof(unsigned char) << endl;
		cout << (int)numeric_limits<char>::max() << endl;		// 257
		cout << (int)numeric_limits<char>::lowest() << endl; // int�� ĳ������ ���� �ʴ´ٸ�??


		//�Է¹ޱ�
		cin >> c1;
		cout << c1 << " " << static_cast<int>(c1) << endl;
		//�ѹ��� �α��ڸ� �޴´ٸ�?
		//buffer�� ������ ��µ��� �ʴ� ���ڵ� ������ �ȴ�.

		//\n
		cout << "This is first line \nsecond line"; // \n�� �ϳ��� ���ڷ� ó���ȴ�.
		cout << int('\n') << endl; // endl;�� \n�� ���̴�?

		//\t
		//tab

		//""�� ����ϰ� �ʹٸ�?
		//"�տ� \�� ���δ�.

		//\a
		//�Ҹ� ���

		//wchar_t Ÿ��
		wchar_t c;
		char32_t c3;	//�����ڵ��� ���� �ڷ���

		return 0;

	}
<br>
1. charŸ���� �ʱ�ȭ ��� ���� �ٸ� �ڷ����� �ʱ�ȭ ����� ���� �����
2. cpp ������ std::sting�� ���� �����
3. c, cpp style�� ������ ��ȯ�ϴ� ������ ���ϰ�, static_cast�� �����Ϸ����� Ȯ���� ��ȯ�Ѵٴ� �����̴�.
4.  \n �� endl;�� �������� \n�� ���� �ٹٲ��̶�� ���ڿ� �Ұ��ϰ� �ڿ� ���� ���ڸ� ���ۿ� ��� ó����.
5. endl;�� ��� ���ۿ� ������ ���� ����ϰ� �ٹٲ��� �Ѵٴ¶��̴�.
6. std::flush �� �ٹٲ��� �����ʰ� ���ۿ� �ִ� ���� ���� ����϶�� ���̴�.
7. ���� ASCIIǥ�� ��� �ִ� �������� ���ڵ��� cin / cout���� ����� ���ô�.