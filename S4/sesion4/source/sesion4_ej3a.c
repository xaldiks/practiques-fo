#include <stdio.h>

typedef struct {
	unsigned int hh;
	unsigned int mm;
	unsigned int ss;
}texpr_horaria;

int main() {
	texpr_horaria hora;
	unsigned int segons;

	printf("Expresion horaria (hh mm ss): ");
	scanf("(%u %u %u)", &hora.hh, &hora.mm, &hora.ss);
	
	segons = hora.ss + hora.mm * 60 + hora.hh * 3600;
	printf("Segundos: %u\n", segons);

}
