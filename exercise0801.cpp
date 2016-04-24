#include <stdio.h>
#define diff(x,y) ((x > y) ? (x - y) : (y - x))

int main(void) {
	
	int a = 5;
	int b = 3;
	
	printf("两者的差值%d\n", diff(b,a));
}