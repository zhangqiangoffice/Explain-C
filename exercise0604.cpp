#include <stdio.h>
int sqr(int x) {
	return (x * x);
}
	
int pow4(int x) {
	return (sqr(x) * sqr(x));
}

int main(void) {
	int na;
	printf("输入一个整数：");
	scanf("%d", &na);
	
	printf("四次幂是：%d\n", pow4(na));
}