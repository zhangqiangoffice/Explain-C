#include <stdio.h>
int main (void) {
	int num;
	
	do {
		printf("������һ���Ǹ�������");
		scanf("%d", &num);
		if (num < 0) {
			puts("�벻Ҫ���븺����");
		}
	} while (num < 0);
	
	printf("%d������ʾ�����", num);
	
	do {
		printf("%d", num % 10);
		num = num / 10;
	} while (num != 0);
	
	printf("��\n");
	
	return(0);
}