#include <stdio.h>//����/���ý��౸��

void main()//�� �Է¹޾� �ٸ��� ����ϱ�
{
    char i;
    scanf_s("%c", &i);
    switch (i) {
    case 'A': printf("best!!!");
        break;

    case 'B': printf("good!!");
        break;

    case 'C': printf("run!");
        break;

    case 'D': printf("slowly~");
        break;

    default: printf("what?");
        break;
    }
    
}