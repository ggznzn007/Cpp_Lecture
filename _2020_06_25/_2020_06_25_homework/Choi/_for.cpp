#include <stdio.h>
#include <iostream>
using namespace std;

void for01()
{
	int TD = 0, TC = 0;
	char cd = 0;
	std::cout << " ���ڸ� 2�� �Է��ϼ���.\n" << std::endl;
	std::cin >> TD >> TC;
	std::cout << " �ϰ� ���� ������ �Է��ϼ���\n" << std::endl;
	std::cin >> cd;
	switch (cd)
	{
	case '+':
			std::cout << TD + TC << std::endl;
			break;
	case '-':
		std::cout << TD - TC << std::endl;
		break;
	case '*':
		std::cout << TD * TC << std::endl;
		break;
	case '/':
		std::cout << TD / TC << std::endl;
		break;
	default:
		break;
	}
}

void for02()
{
	int TD = 0, TC = 0;

	std::cout << " ���ڸ� 1�� �Է��ϼ���.\n" << std::endl;
	std::cin >> TD;

	if (-TD > TD)
	{
		TD = -TD;
	}
	std::cout << " ���� �� : " << TD << std::endl;
}

void for05()
{
	int TD = 0;
	int TDO = 0;
	std::cout << "������ ��������." << std::endl;
	std::cin >> TD;
	while (1)
	{
		std::cout << TDO + 1 << " ������ ��´�.\n" << std::endl;
		++TDO;
		if (TDO == TD)
		{
			break;
		}
	}
	std::cout << "\n������ ĳ����.\n" << std::endl;
}

void for06()
{
	int TD = 0;
	int TDO = 0;
	std::cout << "������ ��������." << std::endl;
	std::cin >> TD;
	while (1)
	{
		std::cout << TDO + 1 << " ������ ��´�.\n" << std::endl;
		++TDO;
		if (TDO == TD)
		{
			break;
		}
	}
	std::cout << "\n������ ��.\n" << std::endl;
}

void for07()
{
	int TD = 0;
	int TC = 0;
	int TDO = 0;

	std::cout << "������ �� Ƚ�縦 �Է��Ͻÿ�." << std::endl;
	std::cin >> TD;
	std::cout << "�� �Ҹ��� ������ ���Ͻÿ�." << std::endl;
	std::cin >> TC;

	while (1)
	{
		std::cout << TDO + 1 << " ������ ��´�.\n" << std::endl;
		++TDO;
		if (TDO % TC == 0)
		{
			std::cout << "\n��.\n" << std::endl;
		}
		if (TDO == TD)
		{
			break;
		}
	}
	std::cout << "\n������ ĳ����~\n" << std::endl;
}

void for08()
{
	int TD = 0;
	int TC = 0;
	int TDO = 0;

	std::cout << "������ �� Ƚ�縦 �Է��Ͻÿ�." << std::endl;
	std::cin >> TD;
	std::cout << "½~ �Ҹ��� ������ ���Ͻÿ�." << std::endl;
	std::cin >> TC;

	while (1)
	{
		std::cout << TDO + 1 << " ������ ��´�.\n" << std::endl;
		++TDO;
		if (TDO % 2 == 0)
		{
			std::cout << "\n¦.\n" << std::endl;
		}
		else
		{
			std::cout << "\n��.\n" << std::endl;
		}

		if (TDO % TC == 0)
		{
			std::cout << "\n½~\n" << std::endl;
		}
		if (TDO == TD)
		{
			break;
		}
	}
	std::cout << "\n������ ĳ����~\n" << std::endl;
}

void for10()
{
	int TD = 0;
	int TC = 0;
	int TDO = 0;
	int TrEnd = 0;

	std::cout << "������ �� Ƚ�縦 �Է��Ͻÿ�." << std::endl;
	std::cin >> TD;
	std::cout << "�� �Ҹ��� ������ ���Ͻÿ�." << std::endl;
	std::cin >> TC;

	while (1)
	{
		std::cout << TDO + 1 << " ������ ��´�.\n" << std::endl;
		++TDO;

		if (TDO % TC == 0)
		{
			std::cout << "\n��\n" << std::endl;
		}

		if (TDO == TD)
		{
			break;
		}

		std::cout << "������ ��� ���ðڽ��ϱ�?" << std::endl;
		std::cin >> TrEnd;

		if (TrEnd == -1)
		{
			break;
		}
	}
	std::cout << "\n������ ĳ����~\n" << std::endl;
}




void main()
{
	//for05();
	//for06();
	//for07();
	//for08();
	//for10();
	//for01();
	//for02();
}