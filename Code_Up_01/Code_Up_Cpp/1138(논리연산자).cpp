#include <iostream>

using namespace std;

//int main()// �������� NOT
//{
//	int a;
//	cin >> a ;
//	if (a != 0)
//		cout << 0;
//	else
//		cout << 1;
//	return 0;
//
//}

//int main()//�� ������ AND
//{
//	int a, b;
//	cin >> a >> b;
//	if (a == 1 && b == 1)
//		cout << 1;
//	else
//		cout << 0;
//	return 0;
//
//}

int main()//�� ������ OR
{
	int a, b;
	cin >> a >> b;
	if (a || b)
		cout << 1;
	else
		cout << 0;
	return 0;

}