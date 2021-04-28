#include <stdio.h>

int main() {
	unsigned int in, pes=1, quo, res, b10=0, b2, coef=1,j=0,i,base;

	printf("Introduzca un valor binario: ");
	scanf("%d", &b2);
	printf("Introduzca una base de numeración entre 2 y 10: ");
	scanf("%d", &base);
	quo = b2;
	in = b2;

	while (quo >= 1) {
		i = j;
		if (quo % 2 != 0) {
			coef = 1;
			while (i > 0) {
				coef = coef * 2;
				i--;
			}
		
			b10 = b10 + coef;
		}
		j++;
		quo = quo / 10;
	}
	quo = b10;
	b2 = 0;
	while (quo >= 1) {
		res = quo % base;
		b2 = b2 + res * pes;
		pes = pes * 10;
		quo = quo / base;
        }

	printf("%d (base 2) = %d (base %d)\n", in, b2, base);
		
}
