#include <math.h>
#include <stdio.h>

#define sqr(n) ((n)*(n))

typedef struct {
	int x;
	int y;
} point;

typedef struct {
	double fuel;
	point pt;
} car;

void put_info(car c) {
	printf("当前位置：（%d,%d）\n", c.pt.x, c.pt.y);
	printf("剩余燃料：%.2f升\n", c.fuel);
}

int move(car *c, int dx, int dy) {
	double dist = sqrt(sqr(dx) + sqr(dy));
	if (dist > c->fuel) 
		return (0);
	c->pt.x += dx; c->pt.y+= dy;
	c->fuel -= dist;
	return (1);
}

int main(void) {
	car mycar = {90.0, {0, 0}};
	
	while (1) {
		int slct;
		int dx, dy;
		put_info(mycar);
		printf("开动汽车吗【yes -- 1/ no -- 0】：");
		scanf("%d", &slct);
		if (slct != 1) break;
		printf("X方向的行驶距离为：");
		scanf("%d", &dx);
		printf("Y方向的行驶距离为：");
		scanf("%d", &dy);
		
		if(!move(&mycar, dx, dy))
			puts("燃料不足，无法行驶。");
	}
	
	return (0);
} 