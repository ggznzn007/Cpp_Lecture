#include<iostream>
#include<string.h>
using namespace std;
//* �迭�� ����ϼ���
//1. 10���� ���������� �Է��ϰ�, ���հ� ����� ���ϼ���
void problem1() {
	int eng[10];
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < 10; i++) {
		cout << i+1 << "��° �л��� ���� ������ �Է��ϼ��� : ";
		cin >> eng[i];
		sum += eng[i];
	}
	avg = (double)sum / 10;
	cout << "���� : " << sum << " ��� : " << avg << endl;
}
//2. ����, ����, ���� ������ �� 3���� �Է¹ް�, �������� ���հ� ����� ���ϰ�
//��ü ������ ���հ� ����� ���ϼ���
void problem2() {
	int kor[3],eng[3],math[3];
	int sumAll = 0, sumKor = 0, sumEng = 0, sumMath = 0;
	double avgAll = 0.0, avgKor = 0.0, avgEng = 0.0, avgMath = 0.0;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° �л��� ������ �Է��ϼ���(����, ����, ����) : ";
		cin >> kor[i] >> eng[i] >> math[i];
		sumKor += kor[i]; sumEng += eng[i]; sumMath += math[i];
		sumAll = sumAll + kor[i] + eng[i] + math[i];
	}
	avgKor = (double)sumKor / 3;
	avgEng = (double)sumEng / 3;
	avgMath = (double)sumMath / 3;
	avgAll = (double)sumAll / 9;
	cout << "���� ���� : " << sumKor << " ��� : " << avgKor << endl;
	cout << "���� ���� : " << sumEng << " ��� : " << avgEng << endl;
	cout << "���� ���� : " << sumMath << " ��� : " << avgMath << endl;
	cout << "��ü ���� : " << sumAll << " ��� : " << avgAll << endl;
}
//3. ������� �Է¹ް�, 3���� ������ �Է¹�������
//�׸��� ������ 3���� ������ ����ϼ���
void problem3() {
	char name[10] = { 0 };
	int score1, score2, score3;
	cout << "������� �Է��ϼ��� :";
	cin >> name;
	cout << "3���� ������ �Է��ϼ��� : ";
	cin >> score1 >> score2 >> score3;
	cout << "����� : " << name << endl;
	cout << "���� : " << score1 << " " << score2 << " " << score3 << endl;
}
//4. 10���� ���������� �Է¹ް�, index�� Ȧ���� �͸� ����ϼ���
void problem4() {
	int score[10];
	cout << "10���� ������ �Է��ϼ���"<<endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << "��° �л��� ���� : ";
		cin >> score[i];
		if (i % 2 == 1) cout << score[i]<<endl;
	}
}
//5. 7���� ���������� �迭 �ʱ�ȭ�� ����ؼ� �̸� �Է��ϼ���
//�׸��� 70�� �̻��� �л������� ����ϼ���
void problem5() {
	int kor[7] = { 10,20,90,40,80,60,70 };
	for (int i = 0; i < 7; i++) {
		if (kor[i] >= 70) cout << i + 1 << "�� �л� ���� : " << kor[i] << "��" << endl;
	}
	cout << endl;
}
//6. 5���� �л��� �̸��� ���������� �Է¹�������
//�̸��� ������ ����ϼ���
void problem6() {
	for (int i = 0; i < 5; i++) {
		char name[10]; int kor;
		cout << "�л��� �̸��� ���������� �Է��ϼ��� : ";
		cin >> name >> kor;
		cout << "�̸� : " << name << " ���� : " << kor << endl;
	}cout << endl;
}
//7. 8���� �л��� �̸��� ���������� �Է¹�������
//���� ������ ���� �л��� �̸��� ������ ����ϼ���
void problem7() {
	int max=0;
	char mName[10];
	for (int i = 0; i < 8; i++) {
		char name[10]; int ma;
		cout << "�л��� �̸��� ���������� �Է��ϼ��� : ";
		cin >> name >> ma;
		if (max < ma) {
			max = ma; strcpy(mName, name);
		}
	}
	cout << mName<<" "<< max<<endl;
}
//8. 8���� �л��� �̸��� ���������� �Է¹�������
//���� ������ ���� �л��� �̸��� ������ ����ϼ���
void problem8() {
	int min = 999;
	char mName[10];
	for (int i = 0; i < 8; i++) {
		char name[10]; int ma;
		cout << "�л��� �̸��� ���������� �Է��ϼ��� : ";
		cin >> name >> ma;
		if (min > ma) {
			min = ma; strcpy(mName, name);
		}
	}
	cout << mName << " " << min << endl;
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
		cout << endl;
	}
	return 0;
}