#include <iostream>

using namespace std;

int main()
{
	int y, m, d;
	int sum;
	cin >> y >> m >> d;
	sum = y - m + d; //���ִ� �� -�� +��
	if ((sum % 10 == 0))
	{
		
		cout << "���";
	}
	else
		cout << "�׷�����";

}