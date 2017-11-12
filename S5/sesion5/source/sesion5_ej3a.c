#include <stdio.h>
#define DIM 10

int main()
{
    int vdesord[DIM]={3, 56, 23, 109, 238, 32, 56, 67, 10, 88};
    int i, valor;
  
    /* Complete el programa */
	printf("Contenido del vector vdesord:\n");
	for (i=0; i < DIM; i++) {
		if ((i != 0) && (i % 2 == 0)) {
			printf("\n");
		}
		printf("vdesord[%d]=%d	", i, vdesord[i]);
	}
	printf("\n\n");
	
	printf("Introduzca un valor entero: ");
	scanf("%d", &valor);

	i = 0;
	while (i < DIM) {
		if (valor == vdesord[i]) {
			printf("La primera aparicion del valor %d se encuentra en la posicion %d del vector\n", valor, i);
			break;
		}
		i++;
	}

	if (i == DIM) {
		printf("No se ha encontrado el valor %d en el vector\n", valor);
	}








}

