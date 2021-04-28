#include <stdio.h>

typedef struct {
	int num;
	int den;
}tfraccion;

int main() {
	tfraccion f1, f2, sum, rest, multi, div;

	printf("Fraccion 1 (formato x/y): ");
	scanf("%d/%d%*c", &f1.num, &f1.den);
	printf("Fraccion 2 (formato x/y): ");
	scanf("%d/%d", &f2.num, &f2.den);

	multi.num = f1.num * f2.num;
	multi.den = f1.den * f2.den;
	div.num = f1.num * f2.den;
	div.den = f1.den * f2.num;

	if (f1.den == f2.den) {
		sum.num = f1.num + f2.num;
		sum.den = f1.den;
		rest.num = f1.num - f2.num;
		rest.den = f1.den;
	}
	else if (f1.den == f2.den * -1) {
		if (f1.den < 0) {
			sum.num = f1.num * -1 + f2.num;
			rest.num = f1.num * -1 + f2.num;
			sum.den = f2.den;
			rest.den = f2.den;
		}
		else {
			sum.num = f1.num + f2.num * -1;
			rest.num = f1.num - f2.num * -1;
			sum.den = f1.den;
			rest.den = f1.den;
		}
	}
	else {
		sum.num = f1.num * f2.den + f2.num * f1.den;
		sum.den = f1.den * f2.den;
		rest.num = f1.num * f2.den - f2.num * f1.den;
		rest.den = sum.den;
	}
	
	printf("RESULTADO DE LAS OPERACIONES:\n\n");
	printf("Suma: %d/%d + %d/%d = %d/%d\n\n", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
	printf("Resta: %d/%d - %d/%d = %d/%d\n\n", f1.num, f1.den, f2.num, f2.den, rest.num, rest.den);
	printf("Multiplicacion: %d/%d * %d/%d = %d/%d\n\n", f1.num, f1.den, f2.num, f2.den, multi.num, multi.den);
	printf("Division: %d/%d / %d/%d = %d/%d\n", f1.num, f1.den, f2.num, f2.den, div.num, div.den);
	

}
