#include <stdio.h>

int main() {
	unsigned int b10, res, quo, b2=0,par=1, base;

	printf("Introduzca un número natural en base 10: ");
	scanf("%d", &b10);
	printf("Introduzca una base de numeración entre 2 y 10: ");
	scanf("%d", &base);
	quo = b10;

	while (quo >= 1) {
		res = quo % base;
		b2 = b2 * 10 + res;
		if (b2 == 0) par = par * 10;
		quo = quo / base;
	
	}
	b2 = b2 * par;
	printf("%d (base 10) = %d (base %d)\n", b10, b2, base);
		
}
