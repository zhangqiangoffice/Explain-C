#include <time.h>
#include <stdio.h>
char data_file[] = "datetime.dat";

void get_data(void) {
	FILE *fp;
	if((fp = fopen(data_file, "r")) == NULL) {
		printf("本程序的第一次运行。\n");
	} else {
		int year, month, day, h, m, s;
		char mood[100];
		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, mood);
		printf("上一次运行的是在%d年%d月%d日%d时%d分%d秒，心情%s\n",
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
		printf("文件打开失败。\n");
	else {
		printf("当前的心情：");
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