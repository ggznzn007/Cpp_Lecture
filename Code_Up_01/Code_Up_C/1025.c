#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {// ���� 1���� �Է¹޾� ������ ����ϱ�
	int a, b, c, d, e;
	scanf_s("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d]\n", a*10000);
	printf("[%d]\n", b * 1000);
	printf("[%d]\n",c * 100);
	printf("[%d]\n",d * 10);
	printf("[%d]\n", e);

	return 0;
}