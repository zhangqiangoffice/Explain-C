#include <stdio.h>
int main (void) {
	int month;
	
	printf("�������·ݣ�");
	scanf("%d", &month);
	
	switch(month) {
		case 3:
		case 4:
		case 5:
			puts("�Ǵ���");
			break;
		case 6:
		case 7:
		case 8:
			puts("������");
			break;
		case 9:
		case 10:
		case 11:
	 		puts("������");
	 		break;
		case 12:
		case 1:
		case 2:
			puts("�Ƕ���");
			break;
		default:
			puts("������·ݲ����ڣ���");
			break;
	}
	return (0);
}