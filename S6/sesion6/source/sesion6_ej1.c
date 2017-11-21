#include <stdio.h>

#define V -1
#define N 10
#define S 9

typedef struct {
	int num;
	int den;
}tfrac;

int main() {
	int i,j;

	int m1[5][4] = {{1,1,1,1},
					{1,1,1,1},
					{1,1,1,1},
					{1,1,1,1},
					{1,1,1,1}};
	int sudoku[S][S] = {{5,3,V,V,7,V,V,V,V},
						{6,V,V,1,9,5,V,V,V},
						{V,9,8,V,V,V,V,6,V},
						{8,V,V,V,6,V,V,V,3},
						{4,V,V,8,V,3,V,V,1},
						{7,V,V,V,2,V,V,V,6},
						{V,6,V,V,V,V,2,8,V},
						{V,V,V,4,1,9,V,V,5},
						{V,V,V,V,8,V,V,7,9}};
	tfrac mat_frac[N][N];

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			mat_frac[i][j].num = i+1;
			mat_frac[i][j].den = j+1;
		}
	}

	printf("Valor de m1:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	} 
	printf("\n");

	printf("Valor de sudoku:\n");
	for (i = 0; i < S; i++) {
		for (j = 0; j < S; j++) {
			if (sudoku[i][j] != V) printf("%d ", sudoku[i][j]);
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");

	printf("Valor de mat_frac:\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d/%d	", mat_frac[i][j].num, mat_frac[i][j].den);
		}
		printf("\n");
	}

};
