//Fitxer de funcions
#include <stdio.h>
#include "taulell.h"
#include "casella.h"
#include "colours.h"

int menu() {
    int opcio;
    printf ("1)Taulell 8x8        10 mines\n");
    printf ("2)Taulell 16x16      40 mines\n");
    printf ("3)Taulell 16x30      99 mines\n");
    printf ("4)Taulell personalitzat \n");

    printf("Escull una opció [1-4]: ");
    scanf("%d", &opcio);
    while (opcio > 4 || opcio < 1) {
        printf("Escull una opció [1-4]: ");
        scanf("%*c%d", &opcio);
    }

    return opcio;
}

void aixecar_mines(int files, int columnes, int mines, tcasella taulell[MAX][MAX]) {
    int i, j;
    for (i = 0; i < files; i++) {
        for (j = 0; j < columnes; j++) {
            if (taulell[i][j].contingut == MINA) {
                taulell[i][j].vista = VISTA;
            }
        }
    }
}

void capsalera (int files, int columnes, int mines, int elapsed, int victoria, tcasella taulell[MAX][MAX]) {
    int minuts, segons, marcades = 0;
    int i, j;
    minuts = elapsed / 60;
    segons = elapsed % 60;

    printf("[%.2dm:%.2ds] | ", minuts, segons);

    switch (victoria) {
        case 0:
            cambiar_color(DEFAULT);
            printf(":-) ");
            break;
        case 1:
            cambiar_color(GREEN);
            printf("B-) ");
            cambiar_color(DEFAULT);
            break;
        case 2:
            cambiar_color(RED);
            printf("X-( ");
            cambiar_color(DEFAULT);
            break;
    }
    for (i = 0; i < files; i++) {
        for (j = 0; j < columnes; j++) {
            if (taulell[i][j].vista == MARCADA) {
                marcades++;
            }
        }
    }
    printf("| Mines marcades: %d/%d\n\n", marcades, mines);
}

tpersonalitzat triar_menu(int opcio, tcasella taulell[MAX][MAX]) {
    tpersonalitzat pers;
    switch (opcio) {
        case 1: {
            pers.files = 8;
            pers.columnes = 8;
            pers.mines = 10;
            break;
        }
        case 2: {
            pers.files = 16;
            pers.columnes = 16;
            pers.mines = 40;
            break;
        }
        case 3: {
            pers.files = 16;
            pers.columnes = 30;
            pers.mines = 99;
            break;
        }
        case 4: {
            pers = taulell_personalitzat();
            break;
        }

    }

    return pers;

}

int guanyar(int files, int columnes, int mines, tcasella taulell[MAX][MAX]) {
    int ocultes = 0, mines_ocultes = 0;
    int i, j;
    int marcades = 0, mines_marcades = 0;

    for (i = 0; i < files; i++) {
        for (j = 0; j < columnes; j++) {
            if (taulell[i][j].vista == OCULTA || taulell[i][j].vista == DUBTOSA) ocultes++;
            else if (taulell[i][j].vista == MARCADA) marcades++;

            if ((taulell[i][j].vista == OCULTA  || taulell[i][j].vista == DUBTOSA) && (taulell[i][j].contingut == MINA)) {
                mines_ocultes++;
            }
            else if (taulell[i][j].vista == MARCADA && taulell[i][j].contingut == MINA) {
                mines_marcades++;
            }
        }
    }
    if (mines_marcades == mines || ((mines_ocultes == ocultes) && (marcades == 0)) || (mines_marcades + mines_ocultes == ocultes + marcades)) {
        aixecar_mines(files, columnes, mines, taulell);
        return 1;
    }
    else return 0;
}
