#include <iostream>

using namespace std;

int main()
{
	int a, b,c;
	int temp;
	cin >> a >> b>>c;
	temp = a < b ? a : b;//a��b���� ������ ���̸� a�� �ƴϸ� b��;
	temp = temp < c ? temp : c;//temp�� c���� ������ ���̸� temp�� �ƴϸ� c��;
	cout << temp;
	return 0;
}