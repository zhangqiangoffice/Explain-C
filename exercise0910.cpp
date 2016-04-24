#include <stdio.h>
#include <ctype.h>

void del_digit(char str[]) {
	unsigned i = 0 , j = 0;
	while (str[i]) {
		if (str[i] < '0' || str[i] > '9') {
			str[j] = str[i];
			j++;
		}
			i++;
	}
	str[j] = '\0';
}

int main(void) {
	char str[100];
	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf("%s", str);
	
	del_digit(str);
	printf("²»º¬Êı×Ö£º%s\n", str);

}