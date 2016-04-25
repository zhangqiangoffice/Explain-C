#include <math.h>
#include <stdio.h>

#define sqr(n) ((n)*(n))

typedef struct {
	int x;
	int y;
} point;

double distanceof(point pa, point pb) {
	return (sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y)));
}

int main(void) {
	point p1, p2;
	
	printf("��1��X���꣺");  scanf("%d", &p1.x);
	printf("��1��Y���꣺");  scanf("%d", &p1.y);
	printf("��2��X���꣺");  scanf("%d", &p2.x);
	printf("��2��Y���꣺");  scanf("%d", &p2.y);
	
	printf("����֮��ľ���Ϊ%.2f��\n", distanceof(p1, p2));
	
	return (0);
} 