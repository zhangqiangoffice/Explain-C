#include <stdio.h>
int sqr(int x) {
	return (x * x);
}
	
int pow4(int x) {
	return (sqr(x) * sqr(x));
}

int main(void) {
	int na;
	printf("����һ��������");
	scanf("%d", &na);
	
	printf("�Ĵ����ǣ�%d\n", pow4(na));
}