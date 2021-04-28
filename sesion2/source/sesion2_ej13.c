#include <stdio.h>
#include "libs/colours.h"

int main() {
	int valor;

	printf("Introduzca una valor entero entre 0 y 9: ");
	scanf("%d", &valor);

	if ((valor >= 0) && (valor <= 9)) {
		printf("Ha introducido el ");
		
		if (valor % 2 == 0) {
			cambiar_color(GREEN);
		}

		else {
			cambiar_color(MAGENTA);
		}
	
		switch(valor) {
			case 0:
				printf("CERO\n");
				break;
			case 1:
				printf("UNO\n");
				break;
			case 2:
				printf("DOS\n");
				break;
			case 3:
				printf("TRES\n");
				break;
			case 4:
				printf("CUATRO\n");
				break;
			case 5:
				printf("CINCO\n");
				break;
			case 6:
				printf("SEIS\n");
				break;
			case 7:
				printf("SIETE\n");
				break;
			case 8:
				printf("OCHO\n");
				break;
			case 9:
				printf("NUEVE\n");
				break;
		}
		
		cambiar_color(DEFAULT);
	}
	
	else {
		printf("El numero introducido es dificil de escribir\n");
	}
}
