#include<iostream>

using namespace std;
//1. �ΰ��� ������ �Է¹޾Ƽ� �� �� ū ���� ����ϴ� ���α׷��� �����϶�. ���� ������(���׿����ڸ� ����϶�)
void problem1() {
	cout << "2���� ������ �Է��ϼ��� : ";
	int num1, num2;
	cin >> num1 >> num2;
	cout << (num1 > num2 ? num1 : num2);
}
//2. ������ �Է¹ް� �Է¹��� ���� * 16 / 8 * 4�� ����϶�
//����Ʈ(��Ʈ)�����ڸ� ����϶�.
void problem2() {
	cout << "������ �Է��ϼ��� : ";
	int num;
	cin >> num;
	cout << (num<<4>>3<<2)<< endl;
}
//3. ���� ���� �Է¹ް� �� ����ŭ 3�� ��� ����ϼ���
//���� ��� 5�� �Է¹����� 3 6 9 12 15�� ����ϸ� �˴ϴ�
void problem3() {
	int num;
	cout << "���� ������ �Է��ϼ��� : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cout << i * 3 << " ";
	}
}
//4. ����ڷκ��� ������ �Է¹޽��ϴ�.
//�Է� ���� ���� ��� ���մϴ�
//����ڰ� 0�� �Է��ϸ� ���� ����մϴ�
//�׸��� ���α׷��� �����մϴ�.
void problem4() {
	int sum = 0,num;
	while (1) {
		cout << "������ �Է��ϼ��� : ";
		cin >> num;
		if (num == 0) { cout << "sum : " << sum; break; }
		sum += num;
	}
}
//5. 5�� �Է��ϸ�
//*
//**
//***
//****
//*****
//�̷��� ����ϼ���.
void problem5() {
	int num;
	cout << "������ �Է��ϼ��� : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
//6. 5�� �Է��ϸ�
//*****
//****
//***
//**
//*
//�̷��� �������� ����ϼ���.
void problem6() {
	int num;
	cout << "������ �Է��ϼ��� : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num-i+1; j++) {
			cout << "*";
		}
		cout << endl;
	}
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
		cout << endl;
	}
	return 0;
}