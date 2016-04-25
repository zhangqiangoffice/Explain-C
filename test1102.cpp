#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char s1[128] = "ABCD";
	
	printf("The string s1:");
	scanf("%s", s1);
	
	printf("s1 = %s\n", s1);
	printf("s2 = %d\n", atoi(s1));
	
}