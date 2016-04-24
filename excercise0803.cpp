#include <stdio.h>
#define swap(type,a,b) (a = a + b, b = a - b, a = a - b )

int main(void) {
	int n1 = 10, n2 = 20;
	swap(int, n1, n2);
	printf("n1 = %d\n", n1);
	return (0);
}