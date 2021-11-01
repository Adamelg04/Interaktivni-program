#include <stdio.h>

int main() {
	int vstup, a, b, c, max;
	printf("Vyber si:\n");
	printf("1) trojuhelnik\n");
	printf("2) obdelnik\n");
	printf("3) kruznice\n");
	scanf("%d", &vstup);
	if (vstup == 1) {
		//resime trojuhelnik
		printf("Zadej delku a:");
		scanf("%d", &a);
		printf("Zadej delku b:");
		scanf("%d", &b);
		printf("Zadej delku c:");
		scanf("%d", &c);
		max = a;
		if (b > max) {
			max = b;
		}
		if (c > max) {
			max = c;
		}
		printf("Trojuhelnik:")                                                           //Nejdelsi strana je "max"
		
	}
	else if (vstup == 2) {
		//resime obdelnik
		printf("Zadej delku a:");
		scanf("%d", &a);
		printf("Zadej delku b:");
		scanf("%d", &b);
		if (a == b) {
			printf("Neni to obdelnik\n");
		}
		else {
			printf("Je to obdelnik\n");
		}
		printf("O obvodu:%d\n", 2 * (a + b));
		printf("A obsahu:%d\n", a * b);
	}
	else {
		//resime kruznici
		printf("Zadej polomer: ");
		scanf("%d", &a);
		printf("Obvod: %f\n", 3.14 * 2 * a);
		printf("Obsah: %f\n", 3.14 * a * a);
	}
}


