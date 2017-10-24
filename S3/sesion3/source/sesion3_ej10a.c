#include <stdio.h>

int main() {
	int n,j,i=1;

	printf("Introduzca un numero natural: ");
	scanf("%d", &n);

	while (i <= n) {
		j = i;
		while(j > 0) {
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
}
