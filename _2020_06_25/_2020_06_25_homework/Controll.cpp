#include<iostream>
#include<cmath>
using namespace std;
//1. �ΰ��� �Ǽ��� �Է¹ް� ���� ���� ���� ��������
//+ -*/ ��ȣ�� �Է¹ް� �������� ����϶�
void problem1() {
	int num1, num2;
	char op;
	cout << "�ΰ��� �Ǽ��� �Է��ϼ��� : ";
	cin >> num1 >> num2;
	cout << "�����ڸ� �Է��ϼ��� : ";
	cin >> op;
	if (op == '+') cout << num1 << " + " << num2  << " = "<< num1 + num2 << endl;
	else if (op == '-') cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	else if (op == '*') cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}
//2. ������ �Է¹ް� ���밪�� ���϶�(-5, 5 = > 5)
void problem2() {
	int num;
	cout << "������ �Է��ϼ��� : ";
	cin >> num;
	if (num < 0) num *= -1;
	cout << "num : " << num << endl;
}
// 3. ����ϱ� ���� �������� ���ڸ� �Է¹ް� �ش� �������� ����ϼ���
void problem3() {
	int num;
	cout << "�������� ����� ���� �Է��ϼ��� : ";
	cin >> num;
	for (int i = 1; i <= 9; i++) {
		cout << num << " * " << i << " = " << num * i << endl;
	}
}
//4. 3���� �������� ����ϼ���
void problem4() {
	int num;
	cout << "�������� ����� ���� �Է��ϼ��� : ";
	cin >> num;
	for (int i = 9; i >= 1; i--) {
		cout << num << " * " << i << " = " << num * i << endl;
	}
}
//5. ������ 1~10ȸ ����ٸ� ����ϼ���
void problem5() {
	for (int i = 1; i <= 10; i++) {
		cout << "������ " << i << "ȸ ������ �����" << endl;
	}
}
//6. ������ 1~10ȸ ����ٸ� ����ϰ�
//�� ������ "������ ��"�� ����ϼ���
void problem6() {
	for (int i = 1; i <= 10; i++) {
		cout << "������ " << i << "ȸ ������ �����" << endl;
	}
	cout << "������ ��" << endl;
}
//7. ������ 1 ~100ȸ�� �����
//3������ �ѹ��� "��"
//���������� "������ ĳ����~"�� ����ϼ���
void problem7() {
	for (int i = 1; i <= 100; i++) {
		cout << "������ "<< i << "ȸ ������ ����� ";
		if (i % 3 == 0) cout << "�� ";
	}
	cout << "������ ĳ����~" << endl;
}
//8. ������ 1 ~100ȸ�� �����
//3������ �ѹ��� "��"
//���������� "������ ĳ����~"�� ����ϼ���
//������ 1ȸ �����
//������ 2ȸ �����
//������ 3ȸ �����
//��!
//����� �� 1�� ����ϰ� �����ϼ���
void problem8() {
	for (int i = 1; i <= 100; i++) {
		cout << "������ " << i << "ȸ ������ �����" << endl;
		if (i % 3 == 0) cout << "��" << endl;
	}
	cout << "������ ĳ����~" << endl;
}
//9. ������ 1 ~100ȸ�� �����
//Ȧ���� �� "��", ¦���϶� "¦"�� �ݺ��ϼ���
//5ȸ�� 1���� "½~"�� ����ϼ���
//5ȸ���� "½~"�� ����ϰ� �����ϼ���
//���������� "������ ĳ����~"�� ����ϼ���
void problem9() {
	for (int i = 1; i <= 100; i++) {
		cout << "������ " << i << "ȸ ������ ����� " << endl;
		if (i % 2 == 1) cout << "�� ";
		else if (i % 2 == 0) cout << "¦ ";
		if (i % 5 == 0) cout << "½~" << endl;
	}
	cout << "������ ĳ����~" << endl;
}
//10. ������ ���� ȸ���� ������� "��"�� �ݺ����� �Է¹ް�
//����ϼ���
void problem10() {
	int num,sound;
	cout << "������ ���� ȸ���� �Է����ּ��� : "; cin >> num;
	cout << "���� �ݺ��� ���� �Է����ּ��� : "; cin >> sound;
	for (int i = 1; i <= num; i++) {
		cout << "������ " << i << "ȸ ������ �����" << endl;
		if (i % sound == 0) cout << "��"<<endl;
	}
}
//11. ������ ���� ȸ���� ������� "��"�� �ݺ����� �Է¹ް�
//����ϼ���
//������ ���� ȸ���� - 1�� �Է��ϱ� �������� ��� �ݺ��ؼ�
//�����ϰ� ����ϼ���
void problem11() {
	while (1) {
		int num, sound;
		cout << "������ ���� ȸ���� �Է����ּ��� : "; cin >> num;
		if (num == -1) { cout << "�۾��� �������ϴ�" << endl; break; }
		cout << "���� �ݺ��� ���� �Է����ּ��� : "; cin >> sound;
		for (int i = 1; i <= num; i++) {
			cout << "������ " << i << "ȸ ������ �����" << endl;
			if (i % sound == 0) cout << "��" << endl;
		}
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
		else if (sel == 7) { problem7(); }
		else if (sel == 8) { problem8(); }
		else if (sel == 9) { problem9(); }
		else if (sel == 10) { problem10(); }
		else if (sel == 11) { problem11(); }
		cout << endl;
	}
	return 0;
}