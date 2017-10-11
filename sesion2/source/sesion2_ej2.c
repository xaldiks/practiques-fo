#include <stdio.h>
#define PI 3.14

int main() {
	int radi;
	float area, perimetre;

	printf("Introdueix el radi del cercle:\n");
	scanf("%d", &radi);

	area = radi * radi * PI;
	perimetre = 2 * radi * PI;

	printf("Area del cercle: %.2f\n", area);
	printf("Perimetre del cercle: %.2f\n", perimetre);

}

