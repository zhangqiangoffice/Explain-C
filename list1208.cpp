#include <stdio.h>
#define NUMBER 5

typedef struct {
	char  name[20];
	int   height;
	float weight;
	long  schols;
} student;

void swap(student *x, student *y) {
	student temp = *x;
	*x = *y;
	*y = temp;
}

void sort(student data[], int n) {
	int k = n -1;
	while (k >= 0) {
		int i,j;
		for(i = 1, j = -1; i <= k; i++) {
			if (data[i -1].weight > data[i].weight){
				j = i - 1;
				swap(&data[i], &data[j]);
			}
		}
		k = j;
	}
}

int main(void) {
	int i;
	student std[] = {
		{"Sato", 178, 61.0, 80000},
		{"Sanaka", 175, 60.5, 70000},
		{"Takao", 173, 80.0, 0},
		{"Mike", 165, 72.0, 70000},
		{"Masaki", 179, 77.5, 70000},
	};
	
	sort(std, NUMBER);
	
	puts("-------------------------------");
	for(i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].height, std[i].weight, std[i].schols);

	puts("-------------------------------");
	
	return (0);
}