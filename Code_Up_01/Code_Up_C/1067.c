#include <stdio.h>//����/���ý��౸��

void main()
{
    int num;
    scanf_s("%d", &num);

    if (num > 0) printf("plus\n"); //0���� ũ�� �÷���
    else printf("minus\n");  //�ƴϸ� ���̳ʽ�

    if ((num % 2) == 0) printf("even"); //¦
    else printf("odd"); //Ȧ
}