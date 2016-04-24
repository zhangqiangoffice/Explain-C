#include <stdio.h>
void swap(int *nx, int *ny) {
	int temp = *nx;
	*nx = *ny;
	*ny = temp;
}
int main(void) {
	int na = 1, nb = 2;
	
	swap(&na, &nb);
	
	printf("na = %d\n", na);
	printf("nb = %d\n", nb);
}