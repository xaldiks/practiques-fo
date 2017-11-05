#include <stdio.h>
#include "libs/colours.h"

#define BASTOS 0
#define ESPADAS 1
#define COPAS 2
#define OROS 3

typedef struct {
	int fig;
	int pal;
}tcarta;

int main() {
	tcarta c, max={0,-1};
	char fig, pal, sep;

	printf("Figura carta: r o R, c o C, s o S, 9, ... , 1\n");
	printf("Palo carta: o o O(OROS), c o C(COPAS), e o E(ESPADAS) o b o B(BASTOS)\n");
	printf("Introduzca cartas (fig,palo),...,(fig,palo). : ");
	
	while (sep != '.') {
		scanf("(%c,%c)%c", &fig, &pal, &sep);
		
		// Figura
		if ((fig >= 'a') && (fig <= 'z')) fig = fig - 'a' + 'A';
		
		switch (fig) {
		case 'R':
			c.fig = 12;
			break;
		case 'C':
			c.fig = 11;
			break;
		case 'S':
			c.fig = 10;
			break;
		default:
			c.fig = fig - '0';
		}
		
		// Pal
		if ((pal >= 'a') && (pal <= 'z')) pal = pal - 'a' + 'A';
		switch (pal) {
		case 'O':
			c.pal = OROS;
			break;
		case 'C':
			c.pal = COPAS;
			break;
		case 'E':
			c.pal = ESPADAS;
			break;
		case 'B':
			c.pal = BASTOS;
			break;
		}

		// Comprovar carta mes gran
		if (c.pal > max.pal) {
			max.pal = c.pal;
			max.fig = c.fig;
		}
		else if ((c.pal == max.pal) && (c.fig > max.fig)) {
			max.fig = c.fig;
		}
	}
	
	// Sortida
	switch (max.fig) {
		case 12:
			fig = 'R';
			break;
		case 11:
			fig = 'C';
			break;
		case 10:
			fig = 'S';
			break;
		default:
			fig = max.fig + '0';
	}
	printf("La carta mayor es: (%c,", fig);

	switch (max.pal) {
		case OROS:
			pal = 'O';
			cambiar_color(YELLOW);
			break;
		case COPAS:
			pal = 'C';
			cambiar_color(RED);
			break;
		case ESPADAS:
			pal = 'E';
			cambiar_color(CYAN);
			break;
		case BASTOS:
			pal = 'B';
			cambiar_color(GREEN);
			break;
	}
	printf("%c", pal);
	cambiar_color(DEFAULT);
	printf(")\n");

}
