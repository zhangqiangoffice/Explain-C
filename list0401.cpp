#include <stdio.h>
int main (void) {
	int cont;
	
	do{
		int no;
		printf("������һ��������");
		scanf("%d", &no);
		
		if(no % 2){
			puts("�����������");
		} else {
			puts("�������ż��");
		}
		
		printf("Ҫ�ظ�һ���� ���ǡ�����0/�񡣡���9����");
		scanf("%d", &cont);
	} while (cont == 0);
	
	return (0);
}