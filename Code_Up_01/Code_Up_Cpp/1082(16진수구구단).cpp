#include<iostream>

using namespace std;

int main() 
{
	int a, i = 0;
	cin >> hex >> a;               //a�� 16������ �Է�
	hex(cout);
	cout.setf(ios::uppercase);    // 16���� �빮�ڿ� ���
	for (i = 1; i < 16; i++) {
		cout << a << '*' << i << '=' << a * i << endl;
	}
	return 0;

}