#include <stdio.h>
int main (void) {
	int n1, n2, n3;
	
	printf("�����һ��������");
	scanf("%d", &n1);
	printf("����ڶ���������");
	scanf("%d", &n2);
	printf("���������������");
	scanf("%d", &n3);
	
	if (n1 == n2 && n1 == n3 ) {
		puts("���������");
	} else if (n1 != n2 && n1 != n3 && n2 != n3) {
		puts("�������������");
	} else {
		puts("�����������");
	}

	return (0);	
}