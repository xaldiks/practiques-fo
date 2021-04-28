#include <stdio.h>

int main() {
	unsigned int b10, res, quo, b2=0, pes=1;

	printf("Introduzca un número natural en base 10: ");
	scanf("%d", &b10);
	quo = b10;

	while (quo >= 1) {
		res = quo % 2;
		b2 = b2 + res * pes;
		pes = pes * 10;
		quo = quo / 2;
	
	}
	printf("%d (base 10) = %d (base 2)\n", b10, b2);
		
}
