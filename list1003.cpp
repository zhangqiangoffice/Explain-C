#include <stdio.h>
int main(void) {
	int sato = 178;
	int masaki = 179;
	
	int *isako = &sato, *hiroko = &masaki;
	
	//isako = &sato;
	//hiroko = &masaki;
	
	printf("%d\n", *isako);
	printf("%d\n", *hiroko);
}