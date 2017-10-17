#include <stdio.h>

int main() {
	unsigned int num;
	
	printf("Introduce un numero natural: ");
	scanf("%d", &num);

	for(int i = 0; i < num; i++) {
		printf("%d, ", i);
	}
	printf("%d\n", num);

}
