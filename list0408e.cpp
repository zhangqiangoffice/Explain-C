#include <stdio.h>
int main (void) {
	int i, no;
	printf("������һ��������");
	scanf("%d", &no);
	if (no >= 1) {
		i = 1;
		while (i <= no) {
			printf("%d ", i++);
		}
		putchar('\n');
	}
	return (0);
}