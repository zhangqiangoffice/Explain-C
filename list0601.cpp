#include <stdio.h>
int maxof(int x, int y) {
	if (x > y) {
		return (x);
	} else {
		return (y);
	}
}

int main(void) {
	int na, nb;
	puts("����������������");
	printf("����1��");
	scanf("%d", &na);
	printf("����2��");
	scanf("%d", &nb);
	
	printf("�ϴ�������ֵ��%d��\n", maxof(na, nb));
	
	return (0);
}