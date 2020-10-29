#include<iostream>
#include<cmath>
using namespace std;
//1. 2���� ���� ���� ��ȯ�ϴ� swap�Լ��� ���弼��
//int num0 = 10, num1 = 20;
//swap(&num0, &num1);
//�� ȣ���ϸ� num0�� 20�� num1�� 10�� ��� ������ �˴ϴ�.
void swap(int* num0, int* num1) {
	int temp = *num0;
	*num0 = *num1;
	*num1 = temp;
}
void problem1() {
	int num0 = 10, num1 = 20;
	swap(&num0, &num1);
	cout << "num0 : " << num0 << " num1 : " << num1 << endl;
}
//2. 3���� ���� ���� ��ȯ�ϴ� swap�Լ��� ���弼��
//int num0 = 10, num1 = 20, num2 = 30;
//swap(&num0, &num1, &num2);
//�� ȣ���ϸ� num0�� 30�� num1�� 10, num2�� 20�� ��� ������ �˴ϴ�.
void swap(int* num0, int* num1, int* num2) {
	int temp = *num2;
	*num2 = *num1;
	*num1 = *num0;
	*num0 = temp;
}
void problem2() {
	int num0 = 10, num1 = 20, num2 = 30;
	swap(&num0, &num1, &num2);
	cout << "num0 : " << num0 << " num1 : " << num1 << " num2 : "<<num2<<endl;
}
//3. 10���� �Ǽ��� �迭�� �����ؼ� ����� ���ϴ� �Լ��� ���弼��
double calcAvg(double num[10],double sum) {
	double avg = sum / 10;
	return avg;
}
void problem3() {
	double num[10],sum=0.0,avg=0.0;
	for (int i = 0; i < 10; i++) {
		double temp; 
		cout << "�Ǽ��� �Է��ϼ��� : "; cin >> temp;
		num[i] = temp;
	}
	for (int i = 0; i < 10; i++) {
		sum += num[i];
	}
	avg = calcAvg(num,sum);
	cout << "��� : " << avg<< endl;
}
//4. char* name = "korea";
//int len = strlen(name);
//�� �ϸ� len���� 5�� ��� �ֽ��ϴ�.
//strlen�Լ��� ���ڿ��� ���� '\0'�� ã�Ƽ� �� ������ ������ ���� �������
//�����Ǿ� �ֽ��ϴ�
//���� int str_len(char* ptr); �Լ��� �����ϼ���
int str_len(char* ptr) {
	int cnt=0;
	for (int i = 0;; i++) {
		if (ptr[i] == '\0') break;
		cnt++;
	}
	return cnt;
}
void problem4() {
	char* name = "korea";
	cout << "len : " << str_len(name) << endl;
}
int main() {
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