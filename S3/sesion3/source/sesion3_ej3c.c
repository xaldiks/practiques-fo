#include <stdio.h>

int main() {
	int num, suma=0;

	printf("Introduce una secuencia de naturales que termine con -1: ");

do {
	scanf("%d", &num);
	suma = suma + num;
	
} while(num != -1);

	printf("Suma: %d\n", suma+1);

}
