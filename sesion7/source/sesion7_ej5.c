#include <stdio.h>
#define MAX 100

typedef struct
{     
     int nelem;			/* Cantidad de elementos del vector */
     int vector[MAX];	        /* Elementos del vector */
}tvector; 

int eliminar_elemento(int elem, tvector *v);


int main ()
{ 
    tvector v={16,{3,15,19, 19, 23, 32, 38, 53, 123, 321, 543, 1000, 1123, 6578, 6660, 7999}};

    /* Completar */
	int num, i, cont;

	printf("Numero a eliminar: ");
	scanf("%d", &num);

    cont = eliminar_elemento(num, &v);
	if (cont == 0) printf("Elemento no eliminado");
	else {
		printf("Se han eliminado %d elementos\n", cont);
		printf("Elementos del vector: ");
		for (i = 0; i < v.nelem - 1; i++) {
			printf("%d, ", v.vector[i]);
		}
		printf("%d", v.vector[i]);
	}
	printf("\n");

}

int eliminar_elemento(int elem, tvector *v)
{
  /* Completar */
  int i = 0;
  int cont = 0;
  int j;

  while ((i < v->nelem) && (v->vector[i] < elem)) {
    i++;
  }

  while ((v->vector[i] == elem) && (i < v->nelem)) {
	for (j = i; j < v->nelem; j++) {
		v->vector[j] = v->vector[j+1];
	}		
  cont++;
  v->nelem -= 1;
  }

  return cont;

}













