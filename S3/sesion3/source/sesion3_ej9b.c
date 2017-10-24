#include <stdio.h>

int main() {
	int n,i,boolean=0;

	printf("Introduzca una secuencia de numeros naturales y finalice con -1: ");
	scanf("%d", &n);

	while (n != -1) {
		for (i=2;i < n; i++) {
			if (n % i == 0) {
				break;
			}
		}
		if ((i == n) || (n == 1)) {
			boolean = 1;
			printf("El numero %d es primo\n", n);
		}
		scanf("%d", &n);
	}
	if (boolean == 0) {
		printf("No hay numeros primos en la secuencia\n");
	}
}
