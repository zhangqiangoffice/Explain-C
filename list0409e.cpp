#include <stdio.h>
int main (void) {
	int i = 2, no;
	printf("������һ��������");
	scanf("%d", &no);
	if (no > 2) {
		while (i < no) {
			printf("%d ", i);
			i += 2;
		}
		putchar('\n');
	}
	return (0);
}