#include <stdio.h>
#include <string.h>

typedef struct {
	char   name[20];
	double height;
	double weight;
} person;

void swap(person *x, person *y) {
	person temp = *x;
	*x = *y;
	*y = temp;
}

void sort(person data[], int n) {
	int k = n -1;
	while (k >= 0) {
		int i,j;
		for(i = 1, j = -1; i <= k; i++) {
			if (data[i -1].height > data[i].height){
				j = i - 1;
				swap(&data[i], &data[j]);
			}
		}
		k = j;
	}
}

int main(void) {
	FILE   *fp;
	int    ninzu = 0 , i;
	char   name[20];
	double height, weight;
	double hsum = 0.0;
	double wsum = 0.0;
	person sone[5];

	
	if ((fp = fopen("hw.dat", "r")) == NULL)
 		printf("文件打开失败。\n");
	else {
		while(fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			strcpy(sone[ninzu].name, name);
			sone[ninzu].height = height;
			sone[ninzu].weight = weight;
			hsum += height;
			wsum += weight;
			ninzu++;
		}
		sort(sone, 5);
		
		for (i = 0; i < ninzu; i++) {
			printf("%-10s %5.1f %5.1f\n", sone[i].name, sone[i].height, sone[i].weight);
		}
		printf("--------------------------\n");
		printf("平均      %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}
	
	return (0);
}