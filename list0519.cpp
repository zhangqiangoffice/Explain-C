#include <stdio.h>
int main(void) {
	int i, no;
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;
	
	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for (no = 5; no <= 1000; no += 2) {
		int flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= no; i++) {
			counter++;
			if (no % prime[i] == 0) {
				flag = 1;
				break;
			}	
		}
		if(!flag) {
			prime[ptr++] = no;
		}	
	}
	for (i = 0; i < ptr; i++) {
		printf("%5d", prime[i]);
	}
	
	printf("\n乘除运算的次数：%lu\n", counter);
	printf("共得到%d个质数\n", ptr);
	
	return (0);
	
}