#include <stdio.h>
#define diff(x,y) ((x > y) ? (x - y) : (y - x))

int main(void) {
	
	int a = 5;
	int b = 3;
	
	printf("���ߵĲ�ֵ%d\n", diff(b,a));
}