#include <stdio.h>
int main (void) {
	int n1, n2, n3, min;
	
	printf("�����һ��������");
	scanf("%d", &n1);
	printf("����ڶ���������");
	scanf("%d", &n2);
	printf("���������������");
	scanf("%d", &n3);
	
	min = (n2 < n1) ? n2 : n1;
	min = (n3 < min) ? n3 : min;
	
	printf("��С�������ǣ�%d\n", min);
	
}