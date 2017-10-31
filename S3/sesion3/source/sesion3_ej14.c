#include <time.h>
#include <stdlib.h>	
#include <stdio.h>
#include "libs/colours.h"	
#define MAX 59

int main() {
	// Declare aqui las variables necesarias
	int cat=0, rat=29, dado;	

	srand(time(NULL)); // Inicializa semilla del generador de numeros aleatorio de rand

	// Escriba a partir de aqui el codigo del programa
	while (1) {
		// Rata
		dado = rand() % 6 + 1;
		rat = rat + dado;
		if (rat > MAX) {
			rat = rat - MAX - 1;
		}
		cambiar_color(GREEN);
		printf("Raton: He sacado un %d. Voy a la casilla %d\n", dado, rat);
		if (rat == cat) {
			printf("Raton: He ganado!!!!\n");
			cambiar_color(DEFAULT);	
			break;
		}

		// Gat
		dado = rand() % 6 + 1;
		cat = cat + dado;
		if (cat > MAX) {
			cat = cat - MAX - 1;
		}
		cambiar_color(RED);
		printf("Gato: He sacado un %d. Voy a la casilla %d\n", dado, cat);
		if (cat == rat) {
			printf("Gato: He ganado!!!!\n");
			cambiar_color(DEFAULT);	
			break;
		}
	}

}

