#include <stdio.h>

int main() {
	double nota;

	printf("Introduzca su nota de FO (numero entre 0 y 10): ");
	scanf("%4lf", &nota);

	if ((nota < 0.0) || (nota > 10.0)) {
		printf("Nota no valida\n");
	}
	
	else if (nota >= 9.0) {
		printf("Tiene un sobresaliente\n");
	}

	else if (nota >= 7.0) {
		printf("Tiene un notable\n");
	}

	else if (nota >= 5.0) {
		printf("Tiene un aprobado\n");
	}

	else if (nota >= 0.0) {
		printf("Ha suspendido; tiene que matricularse a FO de nuevo\n");
	}
	
}
