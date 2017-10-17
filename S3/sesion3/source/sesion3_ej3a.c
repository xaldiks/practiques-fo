#include <stdio.h>

int main() {
	int num,total=0;

	printf("Introduce 10 numeros naturales: ");
	
	for(int i = 0; i < 10; i++) {
		scanf("%d", &num);
		total = total + num;
	}

	printf("Suma: %d\n", total);
}
