#include <stdio.h>
int main (void) {
	int i;
	int vx[8];
	
	for (i = 0; i < 8; i++){
		printf("vx[%d]:", i);
		scanf("%d", &vx[i]);
	}
	
	for (i = 0; i < 4; i ++){
		int temp = vx[i];
		vx[i] = vx[7 - i];
		vx[7 - i] = temp;
	}
	
	for (i = 0; i < 8; i++){
		printf("vx[%d]=%d\n", i, vx[i]);
	}
	
	return (0);
}