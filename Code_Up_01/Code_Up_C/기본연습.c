#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main()
{
	int a;
	int b;
	int c;
	while(1)
	for (int a = 1; a <= 50; ++a) {// a�� �ʱⰪ�� 1�̰�, 50���� 1�� �����Ѵ�
		for (int b = 3; b <= 40; ++b) { // b�� �ʱⰪ�� 2�̰�, 40���� 1�� �����Ѵ�
			for (int c = 5; c <= 30; ++c) {// c�� �ʱⰪ�� 3�̰�, 30���� 1�� �����Ѵ�
				if (a != b && c != a) {
					printf("%������آ�   ", a,b,c);
					
				}
			}	printf("\n");
		}	printf("\n");
	}	printf("\n");

	return 0;
}
