#include <stdio.h>
#define DIM 10
typedef struct {
  int nelem;       /* numero de elementos almacenados en el campo vector */
  int vector[DIM]; /* vector de enteros ordenado de menor a mayor */
} tvector_int;

int main()
{
    tvector_int vect={5,{3, 23, 56, 109, 238}};
  	int valor, i;

    /* Complete el programa */
	printf("Vector inicial: ");
	for (i = 0; i < vect.nelem; i++) {
		if (i == vect.nelem - 1) {
			printf("%d\n", vect.vector[i]);
			break;
		}
		printf("%d, ", vect.vector[i]);		
	}

	printf("Introduzca un valor entero: ");
	scanf("%d", &valor);
 
	i = 0;
	while ((i < vect.nelem) && (valor > vect.vector[i])) {
		i++;
	}

	if (valor == vect.vector[i]) {
		printf("Se ha encontrado el valor %d en la posicion %d del vector\n", valor, i);
		printf("Procedemos a eliminarlo\n\n");
		while (i < vect.nelem) {
			vect.vector[i] = vect.vector[i+1];
			i++;
		}
		vect.nelem--;
		
		printf("Vector: ");
		for (i = 0; i < vect.nelem; i++) {
			if (i == vect.nelem - 1) {
				printf("%d\n", vect.vector[i]);
				break;
			}
			printf("%d, ", vect.vector[i]);		
		}

	}
	else {
		printf("No se ha encontrado el valor %d en el vector\n", valor);
	}
}	

