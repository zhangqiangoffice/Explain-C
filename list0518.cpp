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
	
	printf("\n�˳�����Ĵ�����%lu\n", counter);
	printf("���õ�%d������\n", j);
	
	return (0);
	
}