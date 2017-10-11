#include <stdio.h>

int main() {
	char a,b,c;
	int resultat,mes,any;

	printf("Introdueix les teves 3 inicials:\n");
	scanf("%c%c%c%*c", &a,&b,&c);

	printf("Hola %c%c%c,\nSabies que els ordinadors sabem fer magia?\nEndevinare la teva edat. Ja ho veuras. Prem la tecla <enter> quan estiguis a punt.\nEsperant...", a,b,c);
	scanf("%*c");

	printf("-Pensa en el numero del mes que vas neixer i prem <enter>");
	scanf("%*c");
	printf("-Multiplica'l per 4 i prem <enter>");
	scanf("%*c");
	printf("-Suma-li 5 i prem <enter>");
	scanf("%*c");
	printf("-Multiplica'l per 50 i prem <enter>");
	scanf("%*c");
	printf("-Suma-li 1753 i prem <enter>");
	scanf("%*c");
	printf("-Resta-li el teu any de naixement i prem <enter>");
	scanf("%*c");
	printf("-Suma-li 10 i prem <enter>");
	scanf("%*c");

	printf("Quant t'ha donat?\n");
	scanf("%d%*c", &resultat);

	printf("Hmmmm....... prem <enter> a veure si ho endevino.");
	scanf("%*c");

	// Apliquem pegat pel 2017 :P
	resultat = resultat + 2;

	// Guardem i mostrem mes i any
	mes = resultat / 100 / 2;
	any = resultat - resultat / 100 * 100 + 2;
	printf("Vas neixer el mes %d i aquest any has fet o faras %d anys.\n", mes,any);
	

	
		
	
	

}
