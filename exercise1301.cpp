#include <stdio.h>
int main(void) {
	FILE *fp;
	char name[20];
	
	printf("输入要打开的文件：");
	scanf("%s", &name);
	
	fp = fopen(name, "r");
	
	if(fp == NULL)
		printf("文件打开失败。\n");
	else {
		fclose(fp);
	}
	
	return (0);
}