#include<iostream>

using namespace std;

int main()
{
	int sum = 0;// ���� ����� ����
	int i, n;// n�� �Է¹��� ����, i�� n������ ����
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0) // ¦�� , (i % 2==1) Ȧ��
			sum = sum + i;
				
	}
	cout << sum;
	return 0;
}