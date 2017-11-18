// Esquema del projecte. No compilar, peta segur.

#include <stdio.h>

#define TRUE 1
#define FALSE 0

// Objectes

typedef struct {
	int mina; // TRUE o FALSE
	int quantitat;

}tcasella;

typedef struct {
	int files;
	int columnes;
	tcasella mines;

	char taulell[files+1][columnes+1];

}ttaulell;


// Accions taulell
int menu() {
	int opcio;

	printf("Menú:\n");
	printf("1) Taulell  8x8			10 mines\n");
	printf("2) Taulell	16x16		40 mines\n");
	printf("3) Taulell	16x30		99 mines\n");
	printf("4) Taulell personalitzat\n");
	printf("Escull una opció [1-4]\n");
	scanf("%d%*c", &opcio);

	return opcio;
}

void triar_menu(int opcio) {
	switch (opcio) {
		case 1:
			generar_taulell(8,8,10);
			break;
		case 2:
			generar_taulell(16,16,40);
			break;
		case 3:
			generar_taulell(16,30,99);
			break;
		case 4:
			generar_taulell(personalitzat.files, personalitzat.columnes, personalitzat.mines.quantitat);
			break;	
	}
}

ttaulell taulell_personalitzat() {
	ttaulell personalitzat;
	int mines;

	printf("Files? [4-36]: ");
	scanf(("%d%*c", &personalitzat.files);
	printf("Columnes? [4-36]: ");
	scanf("%d%*c", &personalitzat.columnes);
	mines = personalitzat.files * personalitzat.columnes - 9;
	printf("Mines? [1-%d]: ", mines);
	scanf("%d%*c", &personalitzat.mines.quantitat);
	posar_mines();

	return personalitzat;
}

ttaulell generar_taulell(int files, int columnes, int quantitat) {
	ttaulell taulell;
	taulell.files = files;
	taulell.columnes = columnes;
	taulell.mines.quantitat = quantitat;

	return taulell;

} 

// Accions caselles
void ocultar_casella();
void aixecar_casella();
void marcar_casella();
void dubtosa_casella();

// Acciones mines
void posar_mines();
