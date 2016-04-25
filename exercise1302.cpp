#include <stdio.h>
int main(void) {
	FILE *fp;
	char name[20];
	
	printf("输入要打开的文件：");
	scanf("%s", &name);
	
	fp = fopen(name, "r");
	
	if(fp == NULL)
		printf("文件不存在。\n");
	else {
		printf("文件存在。\n");
		fclose(fp);
	}
	
	return (0);
}