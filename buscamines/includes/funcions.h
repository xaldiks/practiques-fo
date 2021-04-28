//
// Created by aniol on 12/5/17.
//

#ifndef BUSCAMINES_FO_FUNCIONS_H
#define BUSCAMINES_FO_FUNCIONS_H

#include "casella.h"
#include "taulell.h"

int menu();
void aixecar_mines(int files, int columnes, int mines, tcasella taulell[MAX][MAX]);
void capsalera (int files, int columnes, int mines, int elapsed, int victoria, tcasella taulell[MAX][MAX]);
tpersonalitzat triar_menu(int opcio, tcasella taulell[MAX][MAX]);
int guanyar(int files, int columnes, int mines, tcasella taulell[MAX][MAX]);

#endif //BUSCAMINES_FO_FUNCIONS_H
