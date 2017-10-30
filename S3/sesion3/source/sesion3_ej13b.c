#include <stdio.h>

int main() {
	unsigned int b10, res, quo, b2=0, base, pes=1;

	printf("Introduzca un número natural en base 10: ");
	scanf("%d", &b10);
	printf("Introduzca una base de numeración entre 2 y 10: ");
	scanf("%d", &base);
	quo = b10;

	while (quo >= 1) {
		res = quo % base;
		b2 = b2 + res * pes;
		pes = pes * 10;
		quo = quo / base;
	
	}
	printf("%d (base 10) = %d (base %d)\n", b10, b2, base);
		
}
