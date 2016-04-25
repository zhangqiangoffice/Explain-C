#include <stdio.h>
#include <string.h>

struct gstudent {
	char  name[20];
	int   height;
	float weight;
	long  schols;
};

int main(void) {
	struct gstudent sanaka;
	
	strcpy(sanaka.name, "Sanaka");
	sanaka.height = 175;
	sanaka.weight= 60.5;
	sanaka.schols= 70000;
	
	printf("name = %s\n", sanaka.name);
	printf("height = %d\n", sanaka.height);
	printf("weight = %f\n", sanaka.weight);
	printf("schols = %ld\n", sanaka.schols);
	
	return (0);
}