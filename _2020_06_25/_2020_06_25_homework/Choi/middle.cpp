#include <stdio.h>
#include <iostream>

using namespace std;

void middle_01()
{
	int TD = 0;
	int TC = 0;

	std::cout << "���ڸ� 2�� �Է��Ͻʽÿ�." << std::endl;
	std::cin >> TD >> TC;
	TC = TD > TC ? TD : TC; // TD�� TC���� ũ�ٸ� / TC = TD, �ƴϸ� TC = TC
	// TD = IF( TD > TC ) 
	std::cout << TC << std::endl;
}

void middle_02()
{
	int TD = 0;
	int TC = 0;

	std::cout << "���ڸ� 1�� �Է��Ͻʽÿ�." << std::endl;
	std::cin >> TD;
	
	TC = TD << 3; // TD�� ��Ʈ�� �������� 3�� �̵�. 2������ ���������� 1�� �̵��� 2�� ���ѰͰ� ����. 3���� �̵��� ( 1 = 2, 2 = 4, 3 = *) 8�� ���ѰͰ� ����.
	std::cout << TD << "* 16/8*4 =" << TC << std::endl;
}

void middle_02_1()
{
	int TD = 0;
	int TC = 0;

	std::cout << "���ڸ� 1�� �Է��Ͻʽÿ�." << std::endl;
	std::cin >> TD;

	TC = TD << 4 >>3 << 2; // TD�� ��Ʈ�� �������� 4�� �̵� = 2�� 4���� = *16, ���������� 3���̵� = 2�� 3���� = /8. �������� 2�� �̵� 2�� 2���� = *4;
	std::cout << TD << "* 16/8*4 =" << TC << std::endl;
}

void main()
{
	middle_01();
	//middle_02();
	//middle_02_1();

}