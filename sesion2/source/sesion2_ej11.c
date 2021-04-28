#include <stdio.h>

int main() {
	int any;

	printf("Introdueix un any: ");
	scanf("%d", &any);

	if ((any % 4 == 0) && (any % 100 != 0) || (any % 100 == 0) && (any % 400 == 0)) {
		printf("L'any %d es bixest.\n", any);
	}

	else {
		printf("L'any %d no es bixest.\n", any);
	}
}
