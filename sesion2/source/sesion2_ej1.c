#include <stdio.h>
#include "libs/colours.h"

int main() {
	char a,b,c;
	int edat;

	printf("Introdueix el teu any de naixement:\n");
	scanf("%d%*c", &edat);	
	printf("Introdueix les 3 primeres lletres del teu nom:\n");
	scanf("%c%c%c", &a,&b,&c);
	
	printf("Hola ");
	cambiar_color(RED);
	printf("%c%c%c\n", a,b,c);
	cambiar_color(DEFAULT);
	printf("El 31/DES/2015 tindras ");
	cambiar_color(YELLOW);
	printf("%d ", 2015-edat);
	cambiar_color(DEFAULT);
	printf("anys\n");
}
