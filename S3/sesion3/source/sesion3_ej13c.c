#include <stdio.h>

int main() {
	unsigned int quo, b10=0, b2, coef=1,j=0,i;

	printf("Introduzca un valor binario: ");
	scanf("%d", &b2);
	quo = b2;

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
	printf("%d (base 2) = %d (base 10)\n", b2, b10);
		
}
