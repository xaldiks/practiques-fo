#include <stdio.h>

int main() {
	double x, num, den, cos;
	unsigned int exp, n, i = 0;

	printf("Introduce un valor real (x): ");
	scanf("%lf", &x);
	printf("Introduce un valor natural (n): ");
	scanf("%u", &n);

	while (i < n) {
		exp = 0;
		num = 1;
		den = 1;

		// Numerador
		while (exp < 2 * i) {
			num = num * x;
			exp++;
		}
		
		// Denominador
		exp = 2 * i;
		while (exp >= 1) {
			den = den * exp;
			exp--;
		}
		
		// Signe
		if (i % 2 == 0) {
			cos = cos + (num/den);
		}
		else {
			cos = cos + (num/den * -1.0);
		}
		i++;
	}
	
	printf("cos(%.2lf) = %.2lf\n", x, cos);
}
