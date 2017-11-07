#include <stdio.h>

#define MAX 100
#define CLAVE 4

typedef struct {
	int nelem;
	char vector[MAX];
}tvector;

int main() {
	tvector frase;
	char in;
	int i = 0;

	printf("Introduzca una frase acabada en punto (<=100 caracteres):\n");
	scanf("%c", &in);

	while (in != '.') {
		frase.vector[i] = in;
		scanf("%c", &in);
		i++;
		frase.nelem = i;
	}
	frase.vector[frase.nelem] = '.';
	frase.nelem++;
	
	//printf("%s\n", frase.vector);
	//printf("%d\n", frase.nelem);
	
	for (i = 0; i < frase.nelem; i++) {
		if ((frase.vector[i] <= 'Z') && (frase.vector[i] >= 'A')) {
			frase.vector[i] = (frase.vector[i] + CLAVE - 'A') % 26 + 'A';
		}
		else if ((frase.vector[i] <= 'z') && (frase.vector[i] >= 'a')) {
			frase.vector[i] = (frase.vector[i] + CLAVE - 'a') % 26 + 'a';
		}
		else if ((frase.vector[i] <= '9') && (frase.vector[i] >= '0')) {
			frase.vector[i] = (frase.vector[i] + CLAVE - '0') % 10 + '0';
		}
	}
	
	printf("%s\n", frase.vector);
}
