#include <stdio.h>
int main (void) {
	int n1, n2, n3;
	
	printf("�����һ��������");
	scanf("%d", &n1);
	printf("����ڶ���������");
	scanf("%d", &n2);
	
	n3 = n2 - n1;
	
	(n3 > 10 || n3 < -10) ? puts("��ֵ����10") : puts("��ֵС��10"); 

	return (0);	
}