#include <stdio.h>

int main(void) {
	int ch;
	FILE *sfp, *dfp;
	char sname[64], dname[64];
	
	printf("��Դ�ļ���"); scanf("%s",sname);
	printf("��Ŀ���ļ���"); scanf("%s", dname);
	
	if((sfp = fopen(sname, "r")) == NULL)
		printf("��Դ�ļ�ʧ�ܡ�\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)
			printf("Ŀ���ļ���ʧ�ܡ�\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
				putc(ch, dfp);
			fclose(dfp);
		}
		fclose(sfp);
	}
	
	return (0);
}