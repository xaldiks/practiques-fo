#include <stdio.h>
#define DIM 100

typedef struct {
  int  num;        /* numero de la matricula */
  char letras[3];  /* letras de la matricula */
} tmatricula;

typedef struct{
   int nmat;               /* numero de matriculas en la lista */
   tmatricula lmat[DIM];   /* lista de matriculas */
} tlista_matriculas;

int main()
{
    tlista_matriculas lista1={4,{{1111,{'A','B','C'}},{1111,{'A','C','C'}},
                              {1122,{'A','B','C'}},{1134,{'B','B','C'}}}};
    tlista_matriculas lista2={3,{{2222,{'B','D','F'}},{1134, {'B','B','C'}},
                             {2223,{'B','D','F'}}}};
    tlista_matriculas lunion;
	int i, j, trobat;  

    /* Complete el programa */
	lunion = lista1;
	for (i=0; i < lista2.nmat; i++) {
		trobat = 0;
		for (j=0; j < lunion.nmat; j++) {
			if ((lista2.lmat[i].num == lunion.lmat[j].num) && (lista2.lmat[i].letras == lunion.lmat[j].letras)) {
				trobat = 1;
				break;
			}
		}
		if (trobat != 1) {
			lunion.lmat[lunion.nmat] = lista2.lmat[i];
			lunion.nmat++;
		}
	}
	
	printf("Lista union: ");
	for (i = 0; i < lunion.nmat-1; i++) {
		printf("%d-%c%c%c, ", lunion.lmat[i].num, lunion.lmat[i].letras[0], lunion.lmat[i].letras[1], lunion.lmat[i].letras[2]);
	}	
	printf("%d-%c%c%c\n", lunion.lmat[i].num, lunion.lmat[i].letras[0], lunion.lmat[i].letras[1], lunion.lmat[i].letras[2]);
	
}

