#include <stdio.h>//����/���ý��౸��

void main()//�� ����ϱ�
{
    int score;
    scanf_s("%d", &score);

    if (score >= 90) printf("A");
    else if (score >= 70) printf("B");
    else if (score >= 40) printf("C");
    else printf("D");
}