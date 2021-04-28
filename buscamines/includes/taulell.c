//Funcions del taulell

#include <stdio.h>
#include "casella.h"
#include "taulell.h"
#include "colours.h"

// Funcions

void mostrar_taulell(int files, int columnes, tcasella taulell[MAX][MAX]) {
    int i;
    int j;

    // Número columnes
    printf(" ");
    for (j = 0; j < columnes; j++) {
        if (j <= 9) {
            printf("|%d", j);
        }
        else {
            printf("|%c", 'A' - 10 + j);
        }
    }
    printf("|\n");

    // Limit superior
    for (j = 0; j <= columnes; j++) {
        printf("-+");
    }
    printf("\n");

    // Taulell
    for (i = 0; i < files; i++) {
        if (i <= 9) {
            printf("%d", i);
        }
        else {
            printf("%c", 'A' - 10 + i);
        }
        for (j = 0; j < columnes; j++) {
            if (taulell[i][j].vista != VISTA && taulell[i][j].vista != MARCADA && taulell[i][j].vista != DUBTOSA) {
                printf("|x");
            }
            else if (taulell[i][j].vista == MARCADA) {
                printf("|");
                cambiar_color(RED);
                printf("!");
                cambiar_color(DEFAULT);
            }
            else if(taulell[i][j].vista == DUBTOSA) {
                printf("|");
                cambiar_color(YELLOW);
                printf("?");
                cambiar_color(DEFAULT);
            }
            else {
                printf("|");
                switch (taulell[i][j].contingut) {
                    case MINA:
                        cambiar_color(RED);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    case '1':
                        cambiar_color(RED);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    case '2':
                        cambiar_color(GREEN);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    case '3':
                        cambiar_color(YELLOW);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    case '4':
                        cambiar_color(BLUE);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    case '5':
                        cambiar_color(MAGENTA);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    case '6':
                        cambiar_color(CYAN);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    case '7':
                        cambiar_color(GREEN);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    case '8':
                        cambiar_color(YELLOW);
                        printf("%c", taulell[i][j].contingut);
                        cambiar_color(DEFAULT);
                        break;
                    default:
                        cambiar_color(DEFAULT);
                        printf("%c", taulell[i][j].contingut);
                }
            }
        }
        printf("|\n");

    }

    // Limit inferior
    for (j = 0; j <= columnes; j++) {
        printf("-+");
    }
    printf("\n");
}

tpersonalitzat taulell_personalitzat() {
    tpersonalitzat personalitzat;
    int mines;

    printf("Files? [4-%d]: ", MAX);
    scanf("%*c%d", &personalitzat.files);
    while (personalitzat.files > MAX || personalitzat.files < 4) {
        printf("Files? [4-%d]: ", MAX);
        scanf("%*c%d", &personalitzat.files);
    }
    printf("Columnes? [4-%d]: ", MAX);
    scanf("%*c%d", &personalitzat.columnes);
    while (personalitzat.columnes > MAX || personalitzat.columnes < 4) {
        printf("Columnes? [4-%d]: ", MAX);
        scanf("%*c%d", &personalitzat.columnes);
    }
    mines = personalitzat.files * personalitzat.columnes - 9;
    printf("Mines? [1-%d]: ", mines);
    scanf("%*c%d", &personalitzat.mines);
    while (personalitzat.mines > mines || personalitzat.mines < 1) {
        printf("Mines? [1-%d]: ", mines);
        scanf("%*c%d", &personalitzat.mines);
    }

    return personalitzat;
}