#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)// �ܾ� 1�� �Է� �޾� ������ ����ϱ�   
{
	int i;// �ܾ� 1���� ���������� ����
	char n[21];// ���ڿ��� ������ �ϴ� �迭�� ����
	scanf_s("%s", &n);// Ű���� �Է����� ���ڿ��� �Է¹���
	for (i = 0; n[i] !='\0'; i++) {
	printf("\'%c\'\n", n[i]);// ��������ǥ�� ���ڿ� ��������ǥ ������ ���
	}
	return 0;
}


//int main(void)// �Ǽ� 1�� �Է¹޾� �κк��� ����ϱ�
//{
//    int a, b = 0;
//
//    scanf_s("%d.%d", &a, &b);
//    printf("%d\n%d", a, b);
//
//    return 0;
//}

//int main(void)// ����1�� �Է¹޾� �״�� ����ϱ�
//{
//    char data[2001] = "";
//    fgets(data, 2000, stdin);
//    printf("%s", data);
//
//    return 0;
//}

//int main(void) { // �ܾ� 1�� �Է¹޾� �״�� ����ϱ�
//
//    char data[51] = "";
//
//    scanf_s("%s", &data);
//    printf("%s", data);
//
//
//
//    return 0;
//}

//int main(void) { // �ֹι�ȣ �Է¹޾� ���¹ٲ� ����ϱ�
//
//    int a, b;
//
//    scanf_s("%d-%d", &a, &b);
//    printf("%06d%07d", a, b);
//
//
//
//    return 0;
//}

//int main(void) { // ��,��,�� �Է¹޾� �״�� ����ϱ�
//
//    int y, m, d;
//
//    scanf_s("%d.%d.%d", &y, &m, &d);
//    printf("%d.%02d.%02d", y, m, d);
//
//    return 0;
//}

//int main(void) { // �ð� �Է� �޾� �״�� ����ϱ�
//
//    int h, m;
//
//    scanf_s("%d:%d", &h, &m);
//    printf("%d:%d ", h, m);
//
//    return 0;
//}

//int main(void) { // ����1���Է� �޾� 3�� ����ϱ�
//
//    int a;
//
//    scanf_s("%d", &a);
//    printf("%d %d %d", a, a, a);
//
//    return 0;
//}

//int main(void) { // �Ǽ� 1�� �Է¹޾� �Ҽ��� ��°�ٸ����� ����ϱ�
//
//    float a;
//
//    scanf_s("%f", &a);
//    printf("%.2f", a);
//
//    return 0;
//}

//int main() {//���� 2���Է¹޾� �״�� ����ϱ�
//	int a = 1;
//	int b = 2;
//	scanf_s("%d%d", &a, &b);  //����/�������� �Է� �����Ͱ� ���еǾ� �Է�
//	printf("%d %d", a, b);
//
//	return 0;
//}

//int main() {// �Ǽ� 1�� �Է¹޾� ����ϱ�
//	float x;
//	scanf_s("%f", &x);
//	printf("%f", x);
//
//	return 0;
//}

//int main() { // ���� 1�� �Է¹޾� ����ϱ�
//	char p;
//	scanf_s("%c", &p);
//	printf("%c", p);
//
//	return 0;
//}

//int main()// ������ ���� �ϳ� �Է� �޾� ����ϱ�
//{
//    int n = 15 ;
//    scanf_s("%d", &n);
//    printf("%d", n);
//
//    return 0;
//}

//int main(void) { // ���ڿ� Ư������ ����ϱ�
//	printf("\u250C\u252C\u2510\n");
//	printf("\u251C\u253C\u2524\n");
//	printf("\u2514\u2534\u2518\n");
//	return 0;
//}

//int main(void) {
//	printf("������\n");
//	printf("������\n");
//	printf("������\n");
//	return 0;
//}