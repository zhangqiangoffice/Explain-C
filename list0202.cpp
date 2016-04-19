#include <stdio.h>
int main(void) {
	int num, last;
	
	printf("请输入一个整数："); scanf("%d", &num);
	
	last = num % 10;
	
	printf("最后一位是%d。 \n", last);
	
	return (0);
}