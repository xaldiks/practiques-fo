#include <stdio.h>
#include "libs/colours.h"

int main() {
	int n,j,color;
	// GREEN = 1
	// YELLOW = 2

	printf("Introduzca un numero natural: ");
	scanf("%d", &n);

	while (n > 0) {
		j = n;
		cambiar_color(GREEN);
		color = 1;
		while(j > 0) {
			printf("*");
			if (color == 1) color = 2;
			else color = 1;
			cambiar_color(color);
			j--;
		}
		printf("\n");
		n--;
	}
	cambiar_color(DEFAULT);
}
