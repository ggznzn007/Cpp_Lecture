#include <stdio.h>
#include <iostream>
using namespace std;

void advanced_01()
{
	int num0, num1, num2;
	int max;
	printf("3���� ���� �Է�: ");
	scanf_s("%d %d %d", &num0, &num1, &num2);
	max = (num0 > num1) ? (num0 > num2 ? num0 : num2) : (num1 > num2 ? num1 : num2);
	printf("max : %d\n", max);
}


void advanced_01_X()
{
	int TNUM[3] = { 0 };
	int Max = 0;

	for (int i =0; i < 3; i++)
	{
		std::cout << "���ڸ� 3�� �Է��Ͻʽÿ�." << std::endl;
		std::cin >> TNUM[i];

		if (i != 0)
		{
			if (TNUM[i] > Max)
			{
				Max = TNUM[i];
			}
		}
		else
		{
			Max = TNUM[i];
		}
	}
	std::cout <<"���� ū�� " << Max << std::endl;
}

void advanced_02()
{
	unsigned char val1 = 0x05, val2 = 0x07, val3 = 0;

	val3 = (val1<<4) ^ val2; // val1 * 16 = 0x50
	std::cout << showbase << hex << (int)val3 << std::endl;
}

void advanced_02_1()
{
	unsigned char val1 = 0x05, val2 = 0x07, val3 = 0;

	val3 = (val1 << 4) | val2;
	std::cout << showbase << hex << (int)val3 << std::endl;
}

void advanced_03()
{
	unsigned char val1 = 0x57, val2 = 0, val3 = 0;

	val2 = (val1 >> 4); // 0x57 / 16 = 5�� ������ = val2 = 0x05
	val3 = val1 ^ (val2<<4); // val1 = 0x57 ^ (0x50=(0x5*16(val2))) val3=val1&0x0f
	std::cout << showbase << hex << "val2 = "<< (int)val2 << "  val3 = "<< (int)val3 << std::endl;
}

void main()
{
	//advanced_02();
	//advanced_01();
	//advanced_03();

}