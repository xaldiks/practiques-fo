//
// Created by aniol on 12/5/17.
//

#ifndef BUSCAMINES_FO_TAULELL_H
#define BUSCAMINES_FO_TAULELL_H

#include "casella.h"

typedef struct {
    int files;
    int columnes;
    int mines;
}tpersonalitzat;

void mostrar_taulell(int files, int columnes, tcasella taulell[MAX][MAX]);
tpersonalitzat taulell_personalitzat();

#endif //BUSCAMINES_FO_TAULELL_H
