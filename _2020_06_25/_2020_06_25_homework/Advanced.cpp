#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
//1. ������ ���ڸ� �Է¹޾Ƽ� ���� ū ���� ����ϴ� ���α׷��� �����϶�
//���� �����ڸ� ����϶�.
void problem1() {
	int num[3];
	int max = 0;
	cout << "3���� ���ڸ� �Է����ּ��� : ";
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
		if (max < num[i]) max = num[i];
	}
	cout << "���� ū �� : " << max << endl;
}
//2. unsigned char val1 = 0x05, val2 = 0x07, val3 = 0 �Դϴ�.
//��Ʈ�̵������ڿ� ��Ʈ�������ڸ� �̿��ؼ� �ΰ��� ���� �ϳ��� ��ġ�� ����ϼ���.
//��, val3���� 0x57�� ����־�� �մϴ�.
void problem2(){
	unsigned char val1 = 0x05, val2 = 0x07, val3 = 0;
	val3 = val3 | val1;
	val3 = (val3 << 4) | val2;
	cout << showbase << hex << (int)val3 << endl;
}
//3. unsigned char val1 = 0x57, val2 = 0, val3 = 0 �Դϴ�.
//��Ʈ�̵������ڿ� ��Ʈ�������ڸ� �̿��ؼ� �ϳ��� ���� �ΰ��� �и��ϰ� ����ϼ���.
//val2�� 0x5, val3�� 0x7�� ����־�� �մϴ�.
void problem3() {
	unsigned char val1 = 0x57, val2 = 0, val3 = 0;
	val2 = val1 >> 4 ;
	//val3 = val1^(val1 & (val1 >> 4 << 4));
	val3 = val2 << 4 ^ val1;
	cout << showbase << hex << (int)val2 << endl;
	cout << showbase << hex << (int)val3 << endl;
}
//4. �̱� �ε����� 1627�⿡ ���� ����ư ����
//�״����� �����ڵ鿡�� �ܵ� 24�޷��� �ȾҴٰ� �մϴ�.
//���� �����ϸ� �氪�� �� �� ������,
//�� ���� ���ݱ��� ���࿡ �־�ΰ�
//8 % �� ���ڸ� ������ �޾Ҵٸ� ������ ��û�� �ݾ���
//�Ǿ� ���� �Ŷ�� �մϴ�.
//2010���� �������� �� ���� ��ġ�� �󸶳� �Ǵ���
//����ϴ� ���α׷��� �ۼ��ϼ���.
//������ 1���� ���������� 8 % �� ���ݿ� ������ �Ǿ
//�� �ݾ��� �ٽ� ������ �Ǵ� ���� ���մϴ�.
void problem4() {
	double money = 24;
	double a = 1;
	double r = (1 + 0.08);
	cout.precision(20);
	cout << "money : " << money * pow(r, 2010 - 1627) << endl;
}
//5. 5�� �Է��ϸ�
//o
//*o
//**o
//***o
//****o
//�̷��� ����ϼ���.
void problem5() {
	cout<<"������ �Է��ϼ��� : ";
	int n; cin>>n;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i)	cout<<"o";
			else cout<<"*";
		}cout<<endl;
	}
}
//6. Ȧ���� �Է��ϸ� �˴ϴ�.
//3
 // *
 //***
 // *
//5
 //  *
 // ***
 //*****
 // ***
 //  *
//7�� �Է��ϸ�
 //   *
 //  ***
 // *****
 //*******
 // *****
 //  ***
 //   *
//�̷��� ����ϼ���.
void problem6() {
	printf("Ȧ���� �Է��ϼ��� : ");
	int n; cin >> n;
	int space = n / 2 + 1;
	int star = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < space; j++) cout << " ";
		for (int j = 0; j < star; j++)cout << "*";
		if (i < n / 2 ) { space--; star += 2; }
		else { space++; star -= 2; }
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