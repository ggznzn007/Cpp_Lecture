#include<iostream>
#include<string.h>
using namespace std;
//1. �ҹ��ڸ� �Է¹ް� �빮�ڸ� ����϶�.
void problem1() {
	char c;
	while (1) {
		cout << "�ҹ��ڸ� �Է��ϼ��� : ";
		cin >> c;
		if (c < 'a' || c>'z') { cout << "�ٽ� �Է��ϼ���" << endl; continue; }
		c -= ('a'-'A');
		cout << "�빮�ڷ� ��ȯ�� �� : " << (char)c<<endl;
	}
}
//2. �빮�ڸ� �Է¹ް� �ҹ��ڸ� ����϶�.
void problem2() {
	char c;
	while (1) {
		cout << "�빮�ڸ� �Է��ϼ��� : ";
		cin >> c;
		if (c < 'A' || c>'Z') { cout << "�ٽ� �Է��ϼ���" << endl; continue; }
		c += ('a' - 'A');
		cout << "�ҹ��ڷ� ��ȯ�� �� : " << (char)c << endl;
	}
}
//3. �ΰ��� ������ �Է¹޾Ƽ� �� �� ū ���� ����ϴ� ���α׷��� �����϶�.
void problem3() {
	int num1, num2;
	cout << "�ΰ��� ������ �Է��ϼ��� : ";
	cin >> num1 >> num2;
	cout << "ū �� : " << (num1>num2?num1:num2) << endl;
}
//4. ������ ���ڸ� �Է¹޾Ƽ� ���� ū ���� ����ϴ� ���α׷��� �����϶�
void problem4() {
	int num[3];
	int max = 0;
	cout << "3���� ���� �Է��ϼ���" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° �� : ";
		cin >> num[i];
		if (max < num[i]) max = num[i];
	}
	cout << "���� ū �� : " << max << endl;
}
int main()
{
	while (1) {
		int sel;
		cout << "���ϴ� ������ �Է��ϼ��� : ";
		cin >> sel;
		if (sel == 0) { cout << "end!!" << endl; break; }
		else if (sel == 1) { problem1(); }
		else if (sel == 2) { problem2(); }
		else if (sel == 3) { problem3(); }
		else if (sel == 4) { problem4(); }

		cout << endl;
	}
	return 0;
}