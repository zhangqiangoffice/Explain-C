#include <stdio.h>
void swap(int *nx, int *ny) {
	int temp = *nx;
	*nx = *ny;
	*ny = temp;
}

void sort3(int *n1, int *n2, int *n3) {
	if (*n1 > *n2) {
		swap(n1, n2);
	}
	if (*n3 < *n1) {
		swap(n3, n1);
	}
	if (*n3 < *n2) {
		swap(n3, n2);
	}
	
}
int main(void) {
	int na = 3, nb = 1, nc =2;
	
	sort3(&na, &nb, &nc);
	
	printf("na = %d\n", na);
	printf("nb = %d\n", nb);
	printf("nc = %d\n", nc);
}