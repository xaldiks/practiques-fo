#include <stdio.h>

#define BASTOS 0
#define ESPADAS 1
#define COPAS 2
#define OROS 3

typedef struct {
	int fig;
	int pal;
}tcarta;

int main() {
	tcarta c;
	char fig, pal;

	printf("Figura carta: r o R, c o C, s o S, 9, ... , 1\n");
	printf("Palo carta: o o O(OROS), c o C(COPAS), e o E(ESPADAS) o b o B(BASTOS)\n");
	printf("Carta (figura,palo): ");
	scanf("(%c,%c)%*c", &fig, &pal);

	if (fig <= 'z') fig = fig + 'A';
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
	}

}
