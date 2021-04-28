#include <stdio.h>
#include "libs/colours.h"

#define S 9
#define V -1

int main() {

	int sudoku[S][S] = {{5,3,V,V,7,V,V,V,V},
				    	{6,V,V,1,9,5,V,V,V},
						{V,9,8,V,V,V,V,6,V},
						{8,V,V,V,6,V,V,V,3},
						{4,V,V,8,V,3,V,V,1},
						{7,V,V,V,2,V,V,V,6},
						{V,6,V,V,V,V,2,8,V},
						{V,V,V,4,1,9,V,V,5},
						{V,V,V,V,8,V,V,7,9}};

	int i,j,red = 0;
	
	for (i = 0; i < S; i++) {
		if (i % 3 == 0 && i != 0) {
			cambiar_color(RED);
			red = 1;
		}
		for (j = 0; j <= S; j++) {
			if (j % 3 == 0 && j != 0 && j != S) {
				cambiar_color(RED);
				red = 0;
			}
			printf("+");
			if (red != 1) {
				if (i % 3 == 0 && i != 0) red = 1;
				else cambiar_color(DEFAULT);
			}
			if (j == S) break;
			printf("-");
		}
		cambiar_color(DEFAULT);
		printf("\n|");
		for (j = 0; j < S; j++) {
			if (sudoku[i][j] != V) printf("%d", sudoku[i][j]);
			else printf(" ");
			if ((j + 1) % 3 == 0 && j != 0 && j + 1 != S) cambiar_color(RED);
			printf("|");
			cambiar_color(DEFAULT);
		}
		printf("\n");
	}

}

