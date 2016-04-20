#include <stdio.h>
int main (void) {
	int cont;
	
	do{
		int no;
		printf("请输入一个整数：");
		scanf("%d", &no);
		
		if(no % 2){
			puts("这个数是奇数");
		} else {
			puts("这个数是偶数");
		}
		
		printf("要重复一次吗？ 【是。。。0/否。。。9】：");
		scanf("%d", &cont);
	} while (cont == 0);
	
	return (0);
}