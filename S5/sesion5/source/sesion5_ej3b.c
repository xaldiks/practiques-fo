#include <stdio.h>
#define DIM 10

int main()
{
    int vorden[DIM]={238, 109, 88, 67, 56, 56, 32, 23, 10, 3 };
    int i, valor;
  
    /* Complete el programa */
	printf("Contenido del vector vorden:\n");
    for (i=0; i < DIM; i++) {
    	if ((i != 0) && (i % 2 == 0)) {
        	printf("\n");
        }
        printf("vorden[%d]=%d		", i, vorden[i]);
    }
    printf("\n\n");

    printf("Introduzca un valor entero: ");
    scanf("%d", &valor);

	i = 0;
	while ((i < DIM) && (valor < vorden[i])) {
		i++;	
	}
	
	if (valor == vorden[i]) {
	    printf("La primera aparicion del valor %d se encuentra en la posicion %d del vector\n", valor, i);
		
	}
	else {
		printf("No se ha encontrado el valor %d en el vector\n", valor);
	}

}

