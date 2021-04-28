#include <stdio.h>

int main() {
	int num,j,i=0;
	unsigned long factorial=1;
	double e=0;

	printf("Introduce un numero natural: ");
	scanf("%d", &num);

	while(num >= 0) {
		j = num;
		factorial = 1;
		while(j >= 1) {
			factorial = factorial * j;
			j--;
		}
		//printf("%lu\n", factorial);
		e = e + 1.0/factorial;
		num--;
	}
	printf("Numero_e = %lf\n", e);
}
