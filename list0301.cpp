#include <stdio.h>
int main(void) {
	int vx;
	
	printf("������һ��������");
	scanf("%d", &vx);
	
	if (vx % 5)
		puts("������������ܱ�5������");
	else
		puts("����������ܱ�5������");
	
	return (0);
}