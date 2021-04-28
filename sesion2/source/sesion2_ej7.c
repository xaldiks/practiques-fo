#include <stdio.h>

int main() {
	int in, hores, minuts, segons;

	printf("Introduzca la cantidad de segundos: ");
	scanf("%d", &in);

	hores = in / 3600;
	minuts = (in % 3600) / 60;
	segons = in % 60;

	printf("%dh %dm %ds\n", hores, minuts, segons);


}
