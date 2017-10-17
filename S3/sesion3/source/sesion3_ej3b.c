#include <stdio.h>

int main() {
	int num, suma=0;

	printf("Introduce una secuencia de naturales que termine con -1: ");
	scanf("%d", &num);

	while(num != -1) {
		suma = suma + num;
		scanf("%d", &num);
	}

	printf("Suma: %d\n", suma);

}
