#include <stdio.h>

int main() {
	unsigned int x,y,prod=0,z;
	
	printf("Introduzca dos números naturales: ");
	scanf("%d %d", &x, &y);
	z = y;

	while (y > 0) {
		prod = prod + x;
		y--;
	}
	printf("%d * %d = %d\n", x, z, prod);
}

