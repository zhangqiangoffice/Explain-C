#include <stdio.h>
int main(void) {
	int n1, n2;
	int wa;
	
	puts("请输入两个整数。");
	printf("整数1：");	scanf("%d", &n1);
	printf("整数2：");	scanf("%d", &n2);
	
	wa = n1 + n2;
	
	printf("%d与%d的和为%d\n", n1, n2, wa);
	
	return (0);
	 
}