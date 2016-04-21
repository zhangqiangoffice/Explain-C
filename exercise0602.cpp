#include <stdio.h>
int minof(int x, int y, int z) {
	int min;
	min = (x > y) ? y : x;
	min = (z > min) ? min : z;
	return (min);
} 
int main(void) {
	int na, nb, nc;
	puts("输入两个整数：");
	printf("第一个整数：");
	scanf("%d", &na);
	printf("第二个整数：");
	scanf("%d", &nb);
	printf("第三个整数：");
	scanf("%d", &nc);
	
	printf("最小的是：%d\n", minof(na, nb, nc));
}