#include <stdio.h>
int main(void) {
	int i, no, j = 2;
	int prime[500];
	unsigned long counter = 0;
	prime[0] = 2;
	prime[1] = 3;

	for (no = 5; no <= 1000; no += 2) {
		for (i = 1; i < j; i++) {
			counter++;
			if (no % prime[i] == 0) {
				break;
			}	
		}
		if(i == j) {
			prime[j++] = no;
		}	
	}
	for (i = 0; i < j; i++) {
		printf("%5d", prime[i]);
	}
	
	printf("\n乘除运算的次数：%lu\n", counter);
	printf("共得到%d个质数\n", j);
	
	return (0);
	
}