#include <stdio.h>
int minof(int x, int y) {
	return ((x > y) ? y : x);
} 
int main(void) {
	int na, nb;
	puts("��������������");
	printf("��һ��������");
	scanf("%d", &na);
	printf("�ڶ���������");
	scanf("%d", &nb);
	
	printf("��С���ǣ�%d\n", minof(na, nb));
}