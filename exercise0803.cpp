#include <stdio.h>
#define max(x,y) (((x) > (y)) ? (x) : (y))

int main(void) {
	int a = 1, b = 2, c = 3, d = 4;

	printf("最大值%d\n", max(max(a,b),max(c,d)));
	printf("最大值%d\n", max(max(max(a,b),c),d));
	
	return (0);
}