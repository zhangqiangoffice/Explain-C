#include <stdio.h>
int minof(int x, int y, int z) {
	int min;
	min = (x > y) ? y : x;
	min = (z > min) ? min : z;
	return (min);
} 
int main(void) {
	int na, nb, nc;
	puts("��������������");
	printf("��һ��������");
	scanf("%d", &na);
	printf("�ڶ���������");
	scanf("%d", &nb);
	printf("������������");
	scanf("%d", &nc);
	
	printf("��С���ǣ�%d\n", minof(na, nb, nc));
}