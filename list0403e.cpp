#include <stdio.h>
int main (void) {
	int n1, n2, sum;
	
	puts("����������������");
	printf("����1��");
	scanf("%d", &n1);
	printf("����2��");
	scanf("%d", &n2); 
	
	if (n1 > n2) {
		sum = n2;
		n2 = n1;
		n1 = sum;
	} 
	
	printf("���ڵ���%dС�ڵ���%d�����������ĺ�Ϊ��", n1, n2);

	sum = 0;
	do {
		sum += n1;
		n1++;
	} while (n1 <= n2);
	
	printf("%d\n", sum);
	
	return (0);
	
}