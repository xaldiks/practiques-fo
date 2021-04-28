#include <stdio.h>

int main() {
	int num,i;
	unsigned long factorial=1;

	printf("Introduce un numero natural: ");
	scanf("%d", &num);
	i = num;	

	while(num >= 1) {
		factorial = factorial * num;
		num--;
	}
	printf("%d! = %lu\n", i, factorial);
}
