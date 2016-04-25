#include <stdio.h>
int main(void) {
	FILE *fp;
	fp = fopen("abc", "r");
	
	if(fp == NULL)
		printf("文件打开失败。\n");
	else {
		fclose(fp);
	}
	
	return (0);
}