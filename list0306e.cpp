#include <stdio.h>
int main (void) {
	int n1, n2, n3, n4, max;
	
	printf("输入第一个整数：");
	scanf("%d", &n1);
	printf("输入第二个整数：");
	scanf("%d", &n2);
	printf("输入第三个整数：");
	scanf("%d", &n3);
	printf("输入第四个整数：");
	scanf("%d", &n4);
	
	max = (n2 > n1) ? n2 : n1;
	max = (n3 > max) ? n3 : max;
	max = (n4 > max) ? n4 : max;
	
	printf("最大的整数是：%d\n", max);

	return (0);	
}