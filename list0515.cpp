#include <stdio.h>
int main(void) {
	int i, no, j = 1;
	unsigned long counter = 0;
	
	for (no = 2; no <= 1000; no++) {
		for (i = 2; i < no; i++) {
			counter++;
			if (no % i == 0) {
				break;
			}	
		}
		if(no == i) {
			j++;
			printf("%5d", no);
		}
			
	}
	
	printf("\n�˳�����Ĵ�����%lu\n", counter);
	printf("���õ�%d������\n", j);
	
	return (0);
	
}