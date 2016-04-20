#include <stdio.h>
int main (void) {
	int a, b;
	
	puts("请输入两个数");
	printf("整数A：");
	scanf("%d", &a);
	printf("整数B：");
	scanf("%d", &b);
	
	if (a == b)
		printf("A与B相等：%d\n", a == b );
	else
 		printf("A与B不等：%d\n", a == b );
 		
	return (0);
}