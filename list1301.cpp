#include <stdio.h>
int main(void) {
	FILE *fp;
	fp = fopen("abc", "r");
	
	if(fp == NULL)
		printf("�ļ���ʧ�ܡ�\n");
	else {
		fclose(fp);
	}
	
	return (0);
}