#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void input_nums(int* lotto_nums);
//void print_nums(int* lotto_nums);
//
//int main(void) {
//	int lotto_nums[6];
//
//	input_nums(lotto_nums);
//	print_nums(lotto_nums);
//	
//	return 0;
//}
//
//void input_nums(int* lotto_nums)
//{
//
//}



// ���ڿ� ����� �ּҶ� ����
//int main(void) {
//	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple"); // �ּ� �� ���
//	printf("�ι�° ������ �ּ� ��: %p\n", "apple"+1); // �ּ� �� ���
//	printf("ù��° ���� : %c\n", *"apple");
//	printf("�ι�° ���� : %c\n", *("apple"+1));
//	printf("�迭�� ǥ���� ����° ���� : %c\n", "apple"[2]);
//	
//
//	return 0;
//}



//// �����ͷ� ���ڿ��� ����ϴ� ���
//int main(void) {
//	char* dessert = "apple";
//
//	printf("���� ����Ʈ�� %s�Դϴ�.\n", dessert);
//	dessert = "banana";
//	printf("\n");
//	printf("���� ����Ʈ�� %s �Դϴ�.\n", dessert);
//  while(*dessert != '\0')
//	{
//		putchar(*dessert);
//		dessert++;
//	}
//
//	return 0;
//}



// scanf �Լ��� ����� ���ڿ� �Է�
//int main(void) {
//	char str[80];
//
//	printf("���ڿ� �Է� : ");
//	scanf("%s", &str);					// %s�� ����ϰ� �迭���� �ش�.
//	printf("ù ��° �ܾ� : %s\n", str); // �迭�� �Էµ� ���ڿ� ���
//	scanf("%s", &str);
//	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str); 
//
//
//	return 0;
//}



// gets �Լ��� �� ���� ���ڿ� �Է¹��
//int main(void) {
//	char str[80];
//
//	printf("������ ���Ե� ���ڿ� �Է� : ");
//	gets(str);
//	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);
//
//	return 0;	
//}


// fgets �Լ��� ���ڿ� �Է� ���
//int main(void) {
//	char str[80];
//
//	printf("������ ���Ե� ���ڿ� �Է� : ");
//	fgets(str, sizeof(str), stdin);
//
//	printf("�Էµ� ���ڿ��� %s �Դϴ�.\n", str);
//
//	return 0;
//
//}



// ���ڿ��� ����ϴ� puts�� fputs �Լ�
//int main(void) {
//	char str[80] = "apple juice"; // �迭�� ���ڿ� �ʱ�ȭ
//	char* ps = "banana"; // �����Ϳ� ���ڿ� ����
//
//	puts(str);				// apple juice ����ϰ� �� �ٲ�
//	fputs(ps, stdout);		// banana�� ���
//	puts("milk");			// banana�� �̾� milk ���
//
//
//	return 0;
//}



// ���� �����غ��� gets �Լ�
//int main(void) {
//	int i = 0;		// �迭 ��� ÷�� ����
//	char str[20];	// ���ڿ��� ������ �迭
//	char ch;		// �Է��� ���ڵ� �޾Ƶ� �ӽ� ����
//
//	do				// do while ���̴� ���� �� ������ �˻��մϴ�.
//	{
//		ch = getchar();	// �ϴ� ���� �ϳ� �Է�
//		str[i] = ch; // �迭�� ����
//		i++;		// ÷�� ����
//
//	} while (ch != '\n'); // �Է��� ���ڰ� �����̸� ����
//
//	str[i] = '\0'; // ���� ���ڰ� �Էµ� ��ġ�� �� ���� ���� 
//	//printf("%s",str);
//
//	return 0;
//}



int main(void) {





	return 0;
}