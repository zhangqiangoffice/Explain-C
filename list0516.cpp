#include <stdio.h>
int main(void) {
	int i, no, j = 1;
	unsigned long counter = 0;
	printf("%5d", 2);
	for (no = 3; no <= 1000; no += 2) {
		for (i = 3; i < no; i +=2) {
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