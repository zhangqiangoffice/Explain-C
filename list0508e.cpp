#include <stdio.h>
int main (void) {
	int i, j, k;
	int ma[2][3] = {1, 2, 3, 4, 5, 6};
	int mb[3][2] = {1, 5, 5, 3, 8, 1};
	int mc[2][2] = {0};
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			for (k = 0; k < 3; k++){
				mc[i][j] +=	ma[i][k] * mb[k][j];
			}
			
		}
	}
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++){
			printf("%3d", mc[i][j]);
		}
		putchar('\n');
	}
	
	return (0);
}