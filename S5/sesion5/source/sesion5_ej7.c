#include <stdio.h>

#define TON 4.184
#define MAX_CAR 80

int main() {
	char cadena[MAX_CAR];
	unsigned int lon_cad = 0, i, cap = 0, max = 0;
	float julios;

	printf("Introduce la cadena: ");
	scanf("%s", cadena);
	
	for (i = 0; cadena[i] != 0; i++) {
		if ((cadena[i] == '<') || (cadena[i] == '>')) {
			cap = !cap;
			lon_cad = 1;	
		}
		else if ((cadena[i] == '=') && (cap == 1)) {
			lon_cad++;
		}
		if (lon_cad > max) max = lon_cad;
	}
	//printf("%d\n", max);
	julios = (max + 1) * TON;
	printf("La cadena: %s ", cadena);
	if (max == 0) printf("no tiene ninguna flecha.\n");
	else printf("tiene la flecha mas larga de longitud: %d y poder: %.2f GigaJulios\n", max, julios);
}
