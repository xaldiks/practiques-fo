#include <stdio.h>

int main() {
	int hores, minuts, segons;

	printf("Introduzca una hora en formato hh:mm:ss: ");
	scanf("%d:%d:%d", &hores, &minuts, &segons);
	
	segons = segons + hores * 3600 + minuts * 60 + 1;
	hores = (segons / 3600) % 24;
	minuts = (segons % 3600) / 60;
	segons = segons % 60;		

	printf("%02d:%02d:%02d\n", hores, minuts, segons);

}
