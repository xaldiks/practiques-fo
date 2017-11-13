#include <stdio.h>
#define DIM 100
typedef struct {
  char palo;  /* b-bastos, c-copas, e-espadas, o-oros */
  int  valor; /* valor entre 1 y 12 */
} tcarta;

typedef struct{
   int ncartas;          /* numero de cartas en la baraja */
   tcarta cartas[DIM];   /* cartas que forman la baraja */
} tbaraja;

int main()
{
    tbaraja b1;
	int i = 1, valor, j, k;
	char palo;

    /* Complete el programa */
	printf("Cuantas cartas tiene su baraja? ");
	scanf("%d", &b1.ncartas);
	printf("Introduzca las cartas separadas por guiones (o4-e10-b1...):\n");
	//scanf("%*c", &b1.cartas[0].palo, &b1.cartas[0].valor);
	scanf("%*c%c%d%*c", &b1.cartas[0].palo, &b1.cartas[0].valor);
	
	while (i < b1.ncartas) {
		scanf("%c%d%*c", &palo, &valor);
		j = 0;
		k = i;
		while (palo > b1.cartas[j].palo) {
			j++;
		}
		if (palo < b1.cartas[j].palo) {
			while (k > j) {
				b1.cartas[k] = b1.cartas[k-1];
				k--;
			}
			b1.cartas[j].palo = palo;
			b1.cartas[j].valor = valor;
		}
		else if (palo == b1.cartas[j].palo) {
			while ((valor > b1.cartas[j].valor) && (palo == b1.cartas[j].palo)) {
				j++;
			}
			while (k > j) {
				b1.cartas[k] = b1.cartas[k-1];
				k--;
			}
			b1.cartas[j].palo = palo;
			b1.cartas[j].valor = valor;
		}
		i++;
	}

	printf("Cartas ordenadas: ");
	for (i = 0; i < b1.ncartas-1; i++) {
		printf("%c%d-", b1.cartas[i].palo, b1.cartas[i].valor);
	}
	printf("%c%d\n", b1.cartas[i].palo, b1.cartas[i].valor);



}

