#include <stdio.h>
int main (void) {
	int no;
	printf("������һ��������");
	scanf("%d", &no);
	if (no > 0) {
		while (no > 0) {
			printf("%d ", no--);
		}
		putchar('\n');
	}
	return (0);
}