#include <stdio.h>
int main (void) {
	int i = 2, no;
	printf("请输入一个整数：");
	scanf("%d", &no);
	if (no > 2) {
		while (i < no) {
			printf("%d ", i);
			i *= 2;
		}
		putchar('\n');
	}
	return (0);
}