#include<iostream>
#include<cmath>
using namespace std;
//1. �ΰ��� ������ �Է¹ް� ��� �������� ����ϼ���
void problem1() {
	cout << "2���� ������ �Է��ϼ��� : ";
	int num1, num2;
	cin >> num1 >> num2;
	if (num2 == 0) {
		cout << "divide by zero" << endl; return;
	}
	cout << "�� : "<< num1/num2 <<" ������ : " << num1%num2 <<endl;
}
//2. ������ ������ �Է¹ް� ������ ���� ������ ���ؼ� ��� ���ϼ���.
//��, num1�� ���� + num2�� ���� + num3�� ����
void problem2() {
	cout << "3���� ������ �Է��ϼ��� : ";
	int num1,num2,num3;
	cin >> num1>>num2>>num3;
	cout << "������ �� : "<< pow(num1,2)+pow(num2,2)+pow(num3,2) << endl;
}
// 3. while���� �̿��ؼ� 1���� 100���� ����ϼ���
void problem3() {
	int num = 1;
	while (num <= 100) {
		cout << num++ << " ";
	}
	cout << endl;
}
//4. while���� �̿��ؼ� 10���� 20���� ����ϼ���
void problem4() {
	int num = 10;
	while (num <= 20) {
		cout << num++ << " ";
	}
	cout << endl;
}
//5. while���� �̿��ؼ� 1���� 10���� ���� ����ϼ���

void problem5() {
	int num = 1;
	int sum = 0;
	while (num <= 10) {
		sum += num++;
	}
	cout << sum << endl;
}
//6. while���� �̿��ؼ� 1���� 10���� �߿� ¦���� ����ϼ���
//while������ ���ǹ��� �־��ָ� ��
//¦�� ���� if num % 2 == 0:
void problem6() {
	int num = 1;
	while (num <= 10) {
		if (num % 2 == 0) cout << num << " ";
		num++;
	}
	cout << endl;
}
// 7. ���� ������ �Է¹ް� �� ����ŭ "�����մϴ�"�� ����ϼ���
void problem7() {
	cout << "���� ������ �Է��ϼ��� : ";
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
		cout << "�����մϴ�" << endl;
	cout << endl;
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
		else if (sel == 5) { problem5(); }
		else if (sel == 6) { problem6(); }
		else if (sel == 7) { problem7(); }
		cout << endl;
	}
	return 0;
}