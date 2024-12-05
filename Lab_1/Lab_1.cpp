#include <iostream>
#include <clocale>


using namespace std;


int main(){
	setlocale(LC_ALL, "RUS");
	cout << "������� 1 \n";
	cout << "int: " << sizeof(int) << " ���� \n"
		<< "short int: " << sizeof(short int) << " ���� \n"
		<< "long long int: " << sizeof(long long int) << " ����\n"
		<< "float: " << sizeof(float) << " ���� \n"
		<< "double: " << sizeof(double) << " ���� \n"
		<< "long double: " << sizeof(long double) << " ���� \n"
		<< "char: " << sizeof(char) << " ���� \n"
		<< "bool: " << sizeof(bool) << " ���� \n";
	
	{
		cout << "������� 2 \n";
		int value;
		cin >> value;
		unsigned int order = 32;
		unsigned int mask = 1 << order - 1;
		for (int i = 1; i <= order; i++)
		{
			putchar(value & mask ? '1' : '0');
			value <<= 1;
			if (i % 8 == 0)
			{
				putchar(' ');
			}
			if (i % order - 1 == 0)
			{
				putchar(' ');
			}
		}
		cout << endl;
	}

	{
		cout << "������� 3 \n";
		union {
			int value;
			float num = 1028;
		};
		cin >> num;
		unsigned int order = sizeof(float)*8;
		unsigned int mask = 1 << order - 1;
		for (int i = 1; i <= order; i++)
		{
			putchar(value & mask ? '1' : '0');
			value <<= 1;
			if (i  == 9)
			{
				putchar(' ');
			}
			if (i % order - 1 == 0)
			{
				putchar(' ');
			}
		}
		cout << endl;
	}
	{
		cout << "������� 4 \n";
		union {
			long long int value;
			double num = 1028;
		};
		cin >> num;
		unsigned int order = sizeof(double) * 8;
		unsigned long long mask = 1 << order - 1;
		for (int i = 1; i <= order; i++)
		{
			putchar(value & mask ? '1' : '0');
			value <<= 1;
			if (i == 12)
			{
				putchar(' ');
			}
			if (i % order - 1 == 0)
			{
				putchar(' ');
			}
		}
		cout << endl;
	}
	{
		cout << "���-6 \n";
		int num, n;
		cout << "������� �����: \n";
		cin >> num;
		cout << "������� ��� � �������� ����� ������\n";
		cin >> n;
		for (int i = 1; n >= 0; --n) 
		{
			num ^= i << n;
		}
		cout << num;
	}
	return 0;
}