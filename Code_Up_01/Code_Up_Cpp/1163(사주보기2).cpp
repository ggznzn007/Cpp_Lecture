#include <iostream>

using namespace std;

int main()
{
	int y, m, d;
	int sum;
	cin >> y >> m >> d;
	sum = (y + m + d)%1000; //���ִ� �� -�� +��
	sum = sum / 100;
	if (sum % 2 == 0)
	{

		cout << "���";
	}
	else
		cout << "�׷�����";

}