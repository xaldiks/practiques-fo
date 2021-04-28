/*
 * Autors: Eudald Llagostera i Aniol Martí
 * Desembre 2017 - FO
 */

#include <stdio.h>
#include <time.h>
#include "includes/funcions.h"
#include "includes/taulell.h"
#include "includes/casella.h"

int main() {
    int opcio = 0, victoria = 0, estat = 0;
    tcasella taulell[MAX][MAX] = {{-1,-1}};
    tpersonalitzat pers;
    taccio a;
    time_t start = 0;
    time_t end = 0;
    time_t elapsed = 0;

    opcio = menu();
    pers = triar_menu(opcio, taulell);

    printf("\n");
    capsalera(pers.files, pers.columnes, pers.mines, elapsed, victoria, taulell);
    mostrar_taulell(pers.files, pers.columnes, taulell);
    printf("\n");

    // Inici partida.
    while (victoria != 1 && victoria != 2) {
        start = time(NULL);
        a = accio(pers.files, pers.columnes);
        switch (a.accio) {
            case '!':
                marcar_casella(pers.files, pers.columnes, pers.mines, a, taulell);
                victoria = guanyar(pers.files, pers.columnes, pers.mines, taulell);
                break;
            case '?':
                dubtosa_casella(a, taulell);
                break;
            case 'x':
                desmarcar_casella(a, taulell);
                break;
            case ' ':
                if (estat == 0) {
                    inicialitzar_taulell(pers.files, pers.columnes, pers.mines, taulell, a);
                    estat = 1;
                }
                victoria = aixecar_casella(pers.files, pers.columnes, pers.mines, a, taulell);
                if (victoria == 2) {
                    break;
                }
                else {
                    victoria = guanyar(pers.files, pers.columnes, pers.mines, taulell);
                }
                break;

        }

        printf("\n");
        end = time(NULL);
        elapsed = elapsed + (end - start);
        capsalera(pers.files, pers.columnes, pers.mines, elapsed, victoria, taulell);
        mostrar_taulell(pers.files, pers.columnes, taulell);
        printf("\n");
    }

    if (victoria == 1) {
        printf ("---> HAS GUANYAT!!!!! <---\n");
    }
    else if (victoria == 2) {
        printf("--> BOOOOOOOOOOMMMMMM!!!!! <---\n");
    }
}