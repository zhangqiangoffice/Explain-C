#include <stdio.h>
int main (void) {
	int a, b;
	
	puts("������������");
	printf("����A��");
	scanf("%d", &a);
	printf("����B��");
	scanf("%d", &b);
	
	if (a == b)
		printf("A��B��ȣ�%d\n", a == b );
	else
 		printf("A��B���ȣ�%d\n", a == b );
 		
	return (0);
}