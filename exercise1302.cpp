#include <stdio.h>
int main(void) {
	FILE *fp;
	char name[20];
	
	printf("����Ҫ�򿪵��ļ���");
	scanf("%s", &name);
	
	fp = fopen(name, "r");
	
	if(fp == NULL)
		printf("�ļ������ڡ�\n");
	else {
		printf("�ļ����ڡ�\n");
		fclose(fp);
	}
	
	return (0);
}