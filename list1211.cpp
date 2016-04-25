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
	printf("��ǰλ�ã���%d,%d��\n", c.pt.x, c.pt.y);
	printf("ʣ��ȼ�ϣ�%.2f��\n", c.fuel);
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
		printf("����������yes -- 1/ no -- 0����");
		scanf("%d", &slct);
		if (slct != 1) break;
		printf("X�������ʻ����Ϊ��");
		scanf("%d", &dx);
		printf("Y�������ʻ����Ϊ��");
		scanf("%d", &dy);
		
		if(!move(&mycar, dx, dy))
			puts("ȼ�ϲ��㣬�޷���ʻ��");
	}
	
	return (0);
} 