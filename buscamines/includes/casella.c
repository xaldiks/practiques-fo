//Funcions casella
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "casella.h"
#include "taulell.h"
#include "funcions.h"

void desmarcar_casella(taccio a, tcasella taulell[MAX][MAX]) {
    if (taulell[a.fila][a.columna].vista != VISTA) {
        taulell[a.fila][a.columna].vista = OCULTA;
    }
}

int aixecar_casella(int files, int columnes, int mines, taccio a, tcasella taulell[MAX][MAX]) {
    int df, dc;
    taccio intern;
    intern.fila = a.fila;
    intern.columna = a.columna;

    if (taulell[a.fila][a.columna].contingut == BUIT) {
        for (df = -1; df <= 1; df++) {
            for (dc = -1; dc <= 1; dc++) {
                if ((intern.fila + df >= 0 && intern.fila + df < MAX) && (intern.columna + dc >= 0 && intern.columna + dc < MAX)) {
                    if (taulell[intern.fila + df][intern.columna + dc].contingut != BUIT) {
                        taulell[intern.fila + df][intern.columna + dc].vista = VISTA;
                    }
                    else if (taulell[intern.fila + df][intern.columna + dc].contingut == BUIT && taulell[intern.fila + df][intern.columna + dc].vista == OCULTA) {
                        taulell[intern.fila + df][intern.columna + dc].vista = VISTA;
                        intern.fila = intern.fila + df;
                        intern.columna = intern.columna + dc;
                        aixecar_casella(files, columnes, mines, intern, taulell);
                    }
                }
            }
        }
    }
    else {
        taulell[a.fila][a.columna].vista = VISTA;
        if (taulell[a.fila][a.columna].contingut == MINA) {
            aixecar_mines(files, columnes, mines, taulell);
            return 2;
        }
    }

    return 0;

}

void marcar_casella(int files, int columnes, int mines, taccio a, tcasella taulell[MAX][MAX]) {
    int i, j;
    int marcades = 0;

    for (i = 0; i < files; i++) {
        for (j = 0; j < columnes; j++) {
            if (taulell[i][j].vista == MARCADA) {
                marcades++;
            }
        }
    }

    if (marcades < mines) {
        taulell[a.fila][a.columna].vista = MARCADA;
    }
    else {
        printf("\nNo pots marcar més caselles :(\n\n");
    }
}

void dubtosa_casella(taccio a, tcasella taulell[MAX][MAX]) {
    taulell[a.fila][a.columna].vista = DUBTOSA;
}

void inicialitzar_taulell(int files, int columnes, int mines, tcasella taulell[MAX][MAX], taccio a) {
    int f, c, j, k, i = 0;
    int mfila, mcol;
    tmina pos_mines[mines];
    srand(time(NULL));

    // Inicialitzem el taulell amb espais (buit).
    for (i = 0; i < files; i++) {
        for (j = 0; j < columnes; j++) {
            taulell[i][j].contingut = BUIT;
            taulell[i][j].vista = OCULTA;
        }
    }

    // Col·loquem les mines.
    i = 0;
    while (i < mines) {
        f = rand() % files;
        c = rand() % columnes;
        // Comprovar que a la posició [f][c] no hi hagi cap mina i posar-la si TRUE.
        if (fabs(f - a.fila) > 1 || fabs(c - a.columna) > 1) {
            if (taulell[f][c].contingut != MINA) {
                taulell[f][c].contingut = MINA;
                taulell[f][c].vista = OCULTA;
                pos_mines[i].fila = f;
                pos_mines[i].columna = c;
                i++;
            }
        }
    }
    // Afegir números.
    for (i = 0; i < mines; i++) {
        for (j = -1; j <= 1; j++) {
            for (k = -1; k <= 1; k++) {
                mfila = pos_mines[i].fila + j;
                mcol = pos_mines[i].columna + k;
                if (mfila < files  && mcol < columnes && mfila >= 0 && mcol >= 0) {
                    if (taulell[mfila][mcol].contingut != MINA) {
                        if (taulell[mfila][mcol].contingut == BUIT) {
                            taulell[mfila][mcol].contingut = '1';
                        } else {
                            taulell[mfila][mcol].contingut += 1;
                        }
                        taulell[mfila][mcol].vista = OCULTA;
                    }
                }
            }
        }
    }
}

taccio accio(int files, int columnes) {
    taccio a;
    char fila, columna;
    int i = 0;

    do {
        if (i > 0) printf("\nCoordenada no vàlida.\n\n");

        printf("Accions: '!' marcar, '?' marcar com a dubtosa, 'x' desmarcar, ' ' aixecar.\n");
        printf("Introdueix la jugada [fca] (fila, columna, acció [!?x ]): ");
        scanf("%*c%c%c%c", &fila, &columna, &a.accio);

        if (fila >= '0' && fila <= '9') {
            a.fila = (int) fila - '0';
        }
        else if (fila >= 'A' && fila <= 'Z') {
            a.fila = (int) fila - 'A' + 10;
        }

        if (columna >= '0' && columna <= '9') {
            a.columna = (int) columna - '0';
        }
        else if (columna >= 'A' && columna <= 'Z') {
            a.columna = (int) columna - 'A' + 10;
        }
        i++;

    } while (a.fila > files - 1 || a.columna > columnes - 1);

    return a;
}