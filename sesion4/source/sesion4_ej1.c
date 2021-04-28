#include <stdio.h>

typedef struct {
	float prof,llarg,ampla,ph,volum,temp;
	int carrils;
	float amplac;
	char us;

}tpiscina;

int main() {
	tpiscina p={2.5,50.0,21.0,6.5,2625.0,26.5,8,250.0,'N'};

	if (p.ampla != p.carrils * p.amplac / 100) {
		printf("Ancho de la piscina no es correcto: inicial = %f calculado = %f\n", p.ampla, p.carrils * p.amplac / 100);
		p.ampla = p.carrils * p.amplac / 100;
		printf("Se ha modificado el ancho de la piscina\n");
	}
	if (p.volum != p.ampla * p.llarg * p.prof) {
		printf("Volumen de la piscina no es correcto: inicial = %f calculado = %f\n", p.volum, p.ampla * p.llarg * p.prof);
		p.volum	= p.ampla * p.llarg * p.prof;
		printf("Se ha modificado el volumen de la piscina\n");
	}

	printf("********************* Caracteristicas de la piscina *********************\n");
	printf("Profundidad = %.1f		Largo = %.1f			Ancho = %.1f\n", p.prof, p.llarg, p.ampla);
	printf("Ph = %.1f			Volumen = %.1f		Temperatura = %.1f\n", p.ph, p.volum, p.temp);
	printf("Carriles = %d			Ancho del carril = %.1f	Uso deportivo = %c\n", p.carrils, p.amplac, p.us);
	printf("**************************************************************************\n");	

}
