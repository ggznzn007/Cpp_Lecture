#include <stdio.h>// ��������

void main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", (a == 0) && (b == 0));
}