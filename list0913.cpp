#include <stdio.h>
#include <ctype.h>

void str_toupper(char str[]) {
	unsigned i = 0;
	while (str[i]) {
		str[i] = toupper(str[i]);
		i++;
	}
}

void str_tolower(char str[]) {
	unsigned i = 0;
	while (str[i]) {
		str[i] = tolower(str[i]);
		i++;
	}
}

int main(void) {
	char str[100];
	printf("�������ַ�����");
	scanf("%s", str);
	
	str_toupper(str);
	printf("��д��ĸ��%s\n", str);
	
	str_tolower(str);
	printf("Сд��ĸ��%s\n", str);
	
	return (0);
}