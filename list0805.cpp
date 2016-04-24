#include <stdio.h>
enum animal { Dog, Cat, Monkey, Invalid};

void dog(void) {
	puts("ΝϊΝϊ");
}
void cat(void) {
	puts("ίχ~");
}
void monkey(void) {
	puts("ίσίσ");
}

enum animal select(void) {
	enum animal tmp;
	do {
		printf("0~~dog  1~~cat  2~~monkey 3~~over:");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return (tmp);
}

int main(void) {
	enum animal selected;
	do {
		selected = select();
		switch (selected ) {
			case Dog   : dog(); break;
			case Cat   : cat(); break;
			case Monkey : monkey(); break;
		}
	} while (selected != Invalid);
	return (0);
} 