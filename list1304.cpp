#include <time.h>
#include <stdio.h>
char data_file[] = "datetime.dat";

void get_data(void) {
	FILE *fp;
	if((fp = fopen(data_file, "r")) == NULL) {
		printf("������ĵ�һ�����С�\n");
	} else {
		int year, month, day, h, m, s;
		char mood[100];
		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, mood);
		printf("��һ�����е�����%d��%d��%d��%dʱ%d��%d�룬����%s\n",
			year, month, day, h, m, s, mood);
		fclose(fp);		
	}
}

void put_data(void) {
	FILE *fp;
	time_t t;
	char mood[100];
	struct tm *local;
	
	time(&t);
	local = localtime(&t);
	
	if((fp = fopen(data_file, "w")) == NULL)
		printf("�ļ���ʧ�ܡ�\n");
	else {
		printf("��ǰ�����飺");
		scanf("%s", mood);
		fprintf(fp, "%d %d %d %d %d %d %s\n",
		local->tm_year + 1900, local->tm_mon+1,
		local->tm_mday, local->tm_hour,
		local->tm_min, local->tm_sec, mood);
		fclose(fp);
	}
}

int main(void) {
	get_data();
	put_data();
	return(0);
}