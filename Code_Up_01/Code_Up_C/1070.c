#include <stdio.h>//����/���ý��౸��

void main()//�� �Է¹޾� ���� ����ϱ�
{
    int season;
    scanf_s("%d", &season);
    switch (season) {
    case 3:
    case 4:
    case 5:
         printf("spring");
        break;

    case 6:
    case 7:
    case 8:
        printf("summer");
        break;

    case 9:
    case 10:
    case 11:
        printf("fall");
        break;      

    default: printf("winter");
        break;
    }

}