#include<iostream>

using namespace std;

int main()
{
	int n, i = 1;
	int sum = 0;
	cin >> n;// ���� 1�� �Է�
	while (true)
	{
		sum += i;//sum = sum + i
		if (n <= sum)// �Է¹��� ������ sum�� ������ i�� ���
		{
			cout << i << endl;
			break;
		}
		i++;// i�� n�� �� �� ���� ���������� ���Ѵ�
	}
	return 0;
}