#include <stdio.h>
int main (void) {
	int n1, n2, n3, n4, max;
	
	printf("�����һ��������");
	scanf("%d", &n1);
	printf("����ڶ���������");
	scanf("%d", &n2);
	printf("���������������");
	scanf("%d", &n3);
	printf("������ĸ�������");
	scanf("%d", &n4);
	
	max = (n2 > n1) ? n2 : n1;
	max = (n3 > max) ? n3 : max;
	max = (n4 > max) ? n4 : max;
	
	printf("���������ǣ�%d\n", max);

	return (0);	
}