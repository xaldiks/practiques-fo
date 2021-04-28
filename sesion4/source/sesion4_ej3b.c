#include <stdio.h>
#define MIG 43200
#define DIA 86400

typedef struct {
	unsigned int hh;
	unsigned int mm;
	unsigned int ss;
}texpr_horaria;

int main() {
	texpr_horaria hora1, hora2;
	unsigned int segons1, segons2, dif1, dif2;

	printf("Introduzca primera expresion horaria (hh mm ss): ");
	scanf("(%u %u %u)%*c", &hora1.hh, &hora1.mm, &hora1.ss);
	printf("Introduzca segunda expresion horaria (hh mm ss): ");	
	scanf("(%u %u %u)", &hora2.hh, &hora2.mm, &hora2.ss);
	
	segons1 = hora1.ss + hora1.mm * 60 + hora1.hh * 3600;
	segons2 = hora2.ss + hora2.mm * 60 + hora2.hh * 3600;

	if (segons1 > MIG) {
		segons1 = DIA - segons1;
	}

	if (segons2 > MIG) {
		segons2 = DIA - segons2;
	}
	
	if (segons1 < segons2) {
		printf("La expresion horaria mas cercana a la medianoche es: (%02u %02u %02u)\n", hora1.hh, hora1.mm, hora1.ss);
	}

	else if (segons1 > segons2) {
		printf("La expresion horaria mas cercana a la medianoche es: (%02u %02u %02u)\n", hora2.hh, hora2.mm, hora2.ss);
	}

	else {
		printf("Las dos expresiones son la misma hora\n");
	}
}
