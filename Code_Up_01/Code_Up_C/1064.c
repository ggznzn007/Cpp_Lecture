#include <stdio.h>//���׿���

void main()
{
    long long int a, b, c;
    scanf_s("%lld %lld %lld", &a, &b, &c);
    printf("%lld", (a < b ? a : b) < c ? (a < b ? a : b) : c);
    //���� 3�� �Է¹޾� ���� ���� �� ����ϱ�
}