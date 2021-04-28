#include <stdio.h>
#include "libs/colours.h"

int main() {
	int n,j,i=1;

	printf("Introduzca un numero natural: ");
	scanf("%d", &n);

	while (i <= n) {
		j = i;
		if (i % 2 == 0) {
			cambiar_color(CYAN);
		}
		else {
			cambiar_color(RED);
		}
		while(j > 0) {
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
	cambiar_color(DEFAULT);
}
