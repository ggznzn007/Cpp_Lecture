#include<iostream>

using namespace std;

int main()
{
	int i,n;
	cin >> n;
	for (i = 1; i <= n; i++) //i�� �ʱⰪ���� n���� �ݺ�
	{
		if (i % 3 == 0) //3�� ���
			cout<< 'X'<<" "; //3�� ����� ��� �� 'X' ���
		else
			cout << i << " ";
	}
	cout << endl;

	return 0;
}