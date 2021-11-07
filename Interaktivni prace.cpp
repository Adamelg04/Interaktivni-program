#include <stdio.h>
#include <math.h>

int main() {
	int vstup, a, b, c, p, max;
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
		//Existuje?
		if ((a + b > c) && (b + c > a) && (c + a > b)) {
			printf("Trojuhelnik existuje\n");
		}
		else {
			printf("Trojuhelnik neexistuje\n");
		}
		//Nejdelsi strana
		max = a;
		if (b > max) {
			max = b;
		}
		if (c > max) {
			max = c;
		}
		printf("Nejdelsi strana je %d\n", max);
		//Je pravouhly?
		if (max == c) {
			if (c * c == (a * a) + (b * b)) {
				printf("Trojuhelnik je pravouhly\n");
			}
			else {
				printf("Trojuhelnik neni pravouhly\n");
			}
		}
		else if (max == b) {
			if (b * b == (a * a) + (c * c)) {
				printf("Trojuhelnik je pravouhly\n");
			}
			else {
				printf("Trojuhelnik neni pravouhly\n");
			}
		}
		else if (max == a) {
			if (a * a == (b * b) + (c * c)) {
				printf("Trojuhelnik je pravouhly\n");
			}
			else {
				printf("Trojuhelnik neni pravouhly\n");
			}
		}
		//Obsah, obvod
		printf("Obvod trojuhelniku je %d\n", a + b + c);
		p = ((a + b + c) / 2);
		printf("Obsah trojuhelniku je %f", sqrt(p * (p - a) * (p - b) * (p - c)));

	}
	else if (vstup == 2) {
		//Resime obdelnik
		printf("Zadej delku a:");
		scanf("%d", &a);
		printf("Zadej delku b:");
		scanf("%d", &b);
		//Je to obdelnik?
		if (a == b) {
			printf("Neni to obdelnik\n");
		}
		else {
			printf("Je to obdelnik\n");
		}
		//Obvod, obsah
		printf("O obvodu:%d\n", 2 * (a + b));
		printf("A obsahu:%d\n", a * b);
	}
	else {
		//Resime kruznici
		printf("Zadej polomer: ");
		scanf("%d", &a);
		//Obvod, obsah
		printf("Obvod: %f\n", 3.14 * 2 * a);
		printf("Obsah: %f\n", 3.14 * a * a);
	}
}


