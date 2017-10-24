#include <stdio.h>

int main() {
	double x, res = 1;
	unsigned int n, cont = 0;

	printf("Introduzca el valor de x (real): ");
	scanf("%lf", &x);
	printf("Introduzca el valor de n (natural): ");
	scanf("%u", &n);

	while (cont < n) {
		res = res * x;
		cont++;
	}
	printf("El resultado de %lf elevado a %u es: %.2lf\n", x, n, res);
}
