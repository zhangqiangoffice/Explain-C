#include <stdio.h>
int minof(int x, int y) {
	return ((x > y) ? y : x);
} 
int main(void) {
	int na, nb;
	puts("输入两个整数：");
	printf("第一个整数：");
	scanf("%d", &na);
	printf("第二个整数：");
	scanf("%d", &nb);
	
	printf("最小的是：%d\n", minof(na, nb));
}