#include <stdio.h>
int main (void) {
	int n1, n2, n3, min;
	
	printf("输入第一个整数：");
	scanf("%d", &n1);
	printf("输入第二个整数：");
	scanf("%d", &n2);
	printf("输入第三个整数：");
	scanf("%d", &n3);
	
	min = (n2 < n1) ? n2 : n1;
	min = (n3 < min) ? n3 : min;
	
	printf("最小的整数是：%d\n", min);
	
}