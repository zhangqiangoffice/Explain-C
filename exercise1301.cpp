#include <stdio.h>
int main(void) {
	FILE *fp;
	char name[20];
	
	printf("����Ҫ�򿪵��ļ���");
	scanf("%s", &name);
	
	fp = fopen(name, "r");
	
	if(fp == NULL)
		printf("�ļ���ʧ�ܡ�\n");
	else {
		fclose(fp);
	}
	
	return (0);
}