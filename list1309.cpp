#include <stdio.h>
int main(void) {
	FILE *fp;
	double pi = 3.14159265358979323846;
	
	if((fp = fopen("PI.bin", "wb")) == NULL)
		printf("�ļ���ʧ�ܡ�\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);
		fclose(fp);
	}
	
	if((fp = fopen("PI.bin", "rb")) == NULL)
		printf("�ļ���ʧ�ܡ�\n");
	else {
		fread(&pi, sizeof(double), 1, fp);
		printf("Բ������%23.31f��\n",pi);
		fclose(fp);	
	}
	return (0);
}