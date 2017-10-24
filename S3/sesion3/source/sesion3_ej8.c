#include <stdio.h>
#include "libs/colours.h"
#define TRUE 1
#define FALSE 0

int main() {
	int opcio = 0,cont,nume,i,j,espai;
	unsigned int exp,n;
	unsigned long factorial;
	double e,x,num,den,cos;
	char in;

	while(opcio != 5) {
		cambiar_color(GREEN);
		printf("1. Mostrar divisores (ejercicio 4)\n");
		printf("2. Calcular numero e (ejercicio 5)\n");
		printf("3. Contar palabras de una frase (ejercicio 6)\n");
		printf("4. Calcular coseno (ejercicio 7)\n");
		printf("5. Salir\n");
		printf("\nEscoja una opción: ");
		cambiar_color(DEFAULT);
		scanf("%d", &opcio);
	
		switch(opcio) {
		case 1:
			i=1;

			printf("Introduzca un numero natural: ");
			scanf("%d", &nume);

			while(i < nume) {
				if (nume % i == 0) {
				printf("%d, ", i);
				}
			i++;
			}
			printf("%d\n", nume);
			break;
		case 2:
			i=0;
			factorial=1;
			e=0;
	
			printf("Introduce un numero natural: ");
			scanf("%d", &nume);

			while(nume >= 0) {
				j = nume;
				factorial = 1;
				while(j >= 1) {
					factorial = factorial * j;
					j--;
				}
				e = e + 1.0/factorial;
				nume--;
			}
			printf("Numero_e = %lf\n", e);
			break;
		case 3:
			cont = 0;
			espai = TRUE;

			printf("Introduzca una frase acabada en punto: ");	

			while(in != '.') {
				scanf("%c", &in);
				if (in != ' ') {
					if (espai == TRUE) {
						cont++;
					}
					espai = FALSE;
				}
				else {
					espai = TRUE;
				}
			}
			printf("Numero de palabras: %d\n", cont);
			break;
		case 4:
			i = 0;

			printf("Introduce un valor real (x): ");
			scanf("%lf", &x);
			printf("Introduce un valor natural (n): ");
			scanf("%u", &n);

			while (i < n) {
				exp = 0;
				num = 1;
				den = 1;

				// Numerador
				while (exp < 2 * i) {
					num = num * x;
					exp++;
				}
			
				// Denominador
				exp = 2 * i;
				while (exp >= 1) {
					den = den * exp;
				exp--;
				}
		
				// Signe
				if (i % 2 == 0) {
					cos = cos + (num/den);
				}
				else {
					cos = cos + (num/den * -1.0);
				}
				i++;
			}
	
			printf("cos(%.2lf) = %.2lf\n", x, cos);
			break;
		case 5:
			break;
		default:
			cambiar_color(RED);
			printf("Opción incorrecta\n");
		}
		printf("\n");
	}
}
