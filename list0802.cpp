#include <stdio.h>
#define sqr(x) ((x) * (x))
int main(void) {
	int nx;
	double dx;
	
	printf("������һ��������");
	scanf("%d", &nx);
	printf("������ƽ����%d��\n", sqr(nx)) ;
	
	printf("������һ��ʵ����");
	scanf("%lf", &dx);
	printf("������ƽ����%f��\n", sqr(dx)) ;
	
	return (0);
}