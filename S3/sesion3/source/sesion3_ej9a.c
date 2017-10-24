#include <stdio.h>
#include "libs/colours.h"

int main() {
	unsigned int n,i = 2;
	
	printf("Introduzca un número natural: ");
	scanf("%u", &n);

	for(;i < n; i++) {
		if (n % i == 0) {
			cambiar_color(RED);
			printf("El numero %u no es primo\n", n);
			cambiar_color(DEFAULT);
			break;
		}
	}

	if ((i == n) || (n == 1)) {
		cambiar_color(GREEN);
		printf("El numero %u es primo\n", n);
		cambiar_color(DEFAULT);
	}
}
