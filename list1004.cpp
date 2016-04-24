#include <stdio.h>
void hiroko(int *height) {
	if (*height < 180) {
		*height = 180;
	}
}
int main(void) {
	int masaki = 179;
	
	hiroko(&masaki);
	
	printf("%d\n", masaki);
}