#include <stdio.h>

void main()
{
	int n, m;
	scanf_s("%d", &n);
	reget: //���̺��� �ݷ�( : ) ���� ������.
	scanf_s("%d", &m);
	printf("%d\n", m);
	if (n-- != 0) goto reget; //reget:���� �̵�, n�� �� 1��ŭ ����
}
