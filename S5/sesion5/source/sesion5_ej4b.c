#include <stdio.h>
#define DIM 10
typedef struct {
  int nelem;       /* numero de elementos almacenados en el campo vector */
  int vector[DIM]; /* vector de enteros ordenado de menor a mayor */
} tvector_int;

int main()
{
    tvector_int vect={6,{3, 10,  23, 56, 109, 238}};
	int valor, i, j;
  
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
	}
	else {
		j = vect.nelem;
		while ((j > i) && (vect.nelem <= DIM)) {
			vect.vector[j] = vect.vector[j - 1];
			j--;
		}
		vect.vector[i] = valor;
		vect.nelem++;
	}
	
	printf("Vector: ");
	for (i = 0; i < vect.nelem; i++) {                                                                                                                                                                        
    	if (i == vect.nelem - 1) {                                                                                                                                                                        
        	printf("%d\n", vect.vector[i]);                                                                                                                                                           
            break;                                                                                                                                                                                    
        }                                                                                                                                                                                                 
        printf("%d, ", vect.vector[i]);                                                                                                                                                                   
    }


}
