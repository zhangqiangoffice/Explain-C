#include <stdio.h>
int main(void) {
	int num, last;
	
	printf("������һ��������"); scanf("%d", &num);
	
	last = num % 10;
	
	printf("���һλ��%d�� \n", last);
	
	return (0);
}