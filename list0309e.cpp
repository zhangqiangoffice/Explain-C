#include <stdio.h>
int main (void) {
	int n1, n2, n3;
	
	printf("输入第一个整数：");
	scanf("%d", &n1);
	printf("输入第二个整数：");
	scanf("%d", &n2);
	printf("输入第三个整数：");
	scanf("%d", &n3);
	
	if (n1 == n2 && n1 == n3 ) {
		puts("三个数相等");
	} else if (n1 != n2 && n1 != n3 && n2 != n3) {
		puts("三个数都不相等");
	} else {
		puts("有两个数相等");
	}

	return (0);	
}