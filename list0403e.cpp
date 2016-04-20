#include <stdio.h>
int main (void) {
	int n1, n2, sum;
	
	puts("请输入两个整数：");
	printf("整数1：");
	scanf("%d", &n1);
	printf("整数2：");
	scanf("%d", &n2); 
	
	if (n1 > n2) {
		sum = n2;
		n2 = n1;
		n1 = sum;
	} 
	
	printf("大于等于%d小于等于%d的所有整数的和为：", n1, n2);

	sum = 0;
	do {
		sum += n1;
		n1++;
	} while (n1 <= n2);
	
	printf("%d\n", sum);
	
	return (0);
	
}