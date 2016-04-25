#include <stdio.h>
size_t str_length(const char *s) {
	size_t len = 0;
	while (*s++)
		len++;
	return (len);
}
int main(void) {
	char st[100];
	
	printf("input a string:");
	scanf("%s", st);
	
	printf("The length of %s is %u.\n", st, (unsigned)str_length(st));
}