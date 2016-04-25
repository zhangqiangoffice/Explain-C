#include <stdio.h>

typedef struct {
	char  name[20];
	int   height;
	float weight;
	long  schols;
} student;

void hiroko(student *std) {
	if (std->height < 180) std->height = 180;
	if (std->weight > 60) std->weight = 60;
}

int main(void) {
	struct gstudent sanaka = {"Sanaka", 175, 60.5, 70000};
	
	hiroko(&sanaka);
	
	printf("name = %s\n", sanaka.name);
	printf("height = %d\n", sanaka.height);
	printf("weight = %f\n", sanaka.weight);
	printf("schols = %ld\n", sanaka.schols);
	
	return (0);
}