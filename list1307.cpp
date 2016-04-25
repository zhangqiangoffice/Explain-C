#include <stdio.h>

int main(void) {
	int ch;
	FILE *sfp, *dfp;
	char sname[64], dname[64];
	
	printf("打开源文件："); scanf("%s",sname);
	printf("打开目标文件："); scanf("%s", dname);
	
	if((sfp = fopen(sname, "r")) == NULL)
		printf("打开源文件失败。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)
			printf("目标文件打开失败。\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
				putc(ch, dfp);
			fclose(dfp);
		}
		fclose(sfp);
	}
	
	return (0);
}