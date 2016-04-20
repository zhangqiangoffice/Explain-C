#include <stdio.h>
int main (void) {
	int n1, n2, n3;
	
	printf("输入第一个整数：");
	scanf("%d", &n1);
	printf("输入第二个整数：");
	scanf("%d", &n2);
	
	n3 = n2 - n1;
	
	(n3 > 10 || n3 < -10) ? puts("差值大于10") : puts("差值小于10"); 

	return (0);	
}