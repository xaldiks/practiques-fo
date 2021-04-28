#include <stdio.h>

int main() {
	int i, k;
	
	//V1
	k = 5;
	
	for (i = 0; i < 3; i++) {
		k = k + 10;
		printf("%d %d\n", i, k);
	}
	
	printf("%d %d\n\n", i, k);

	//V2
	i = 0;
	k = 5;
	
	while (i < 3) {
		k = k + 10;
		printf("%d %d\n", i, k);
		i = i + 1;
	}

	printf("%d %d\n\n", i, k);

	//V3
	i = 0;
	k = 5;
	
	do {
		k = k + 10;
		printf("%d %d\n", i, k);
		i = i + 1;
	} while (i < 3);
	
	printf("%d %d\n", i, k);

}
