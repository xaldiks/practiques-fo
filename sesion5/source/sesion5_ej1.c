#include <stdio.h>

typedef struct {
	int dia;
	int mes;
	int any;
}tfecha;

int main() {
	int i = 0;
	char frase[200] = "Esto es una frase.";
	float v1[20] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
	tfecha vfechas[5]={{1,1,1945}, {7,7,1999}, {12,4,2000}, {16,10,1989}, {8,3,2012}};

	printf("Valor de frase:\n");
	for (i = 0; i < 18; i++) {
		printf("%c", frase[i]);
	}
	printf("\n\n");
	
	printf("Valor de v1:\n");
	for (i = 0; i < 20; i++) {
		if (i != 19) {
			printf("%.1f, ", v1[i]);
		}
		else {
			printf("%.1f\n\n", v1[i]);
		}
	}

	printf("Valor de vfechas:\n");
	for (i = 0; i < 5; i++) {
		if (i != 4) {
			printf("%d/%d/%d, ", vfechas[i].dia, vfechas[i].mes, vfechas[i].any);
		}
		else {
			printf("%d/%d/%d\n", vfechas[i].dia, vfechas[i].mes, vfechas[i].any);
		}
	}
	
}
