#include <stdio.h>//����/���ý��౸��

void main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);// ¦���϶��� ����ϱ�
	if (a % 2 == 0)
	{
		printf("%d\n", a);
	}
	if (b % 2 == 0)
	{
		printf("%d\n", b);
	}
	if (c % 2 == 0)
	{
		printf("%d\n", c);
	}
}