//
// Created by aniol on 12/5/17.
//

#ifndef BUSCAMINES_FO_CASELLA_H
#define BUSCAMINES_FO_CASELLA_H
#define DUBTOSA 3
#define MARCADA 2
#define VISTA 1
#define OCULTA -1
#define MINA '*'
#define BUIT ' '
#define MAX 36

// Objectes
typedef struct {
    char contingut;
    int vista;

}tcasella;

typedef struct {
    int fila;
    int columna;
    char accio;
}taccio;

typedef struct {
    int fila;
    int columna;
}tmina;

void desmarcar_casella(taccio a, tcasella taulell[MAX][MAX]);
int aixecar_casella(int files, int columnes, int mines, taccio a, tcasella taulell[MAX][MAX]);
void marcar_casella(int files, int columnes, int mines, taccio a, tcasella taulell[MAX][MAX]);
void dubtosa_casella(taccio a, tcasella taulell[MAX][MAX]);
void inicialitzar_taulell(int files, int columnes, int mines, tcasella taulell[MAX][MAX], taccio a);
taccio accio(int files, int columnes);

#endif //BUSCAMINES_FO_CASELLA_H
