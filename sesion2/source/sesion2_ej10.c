#include <stdio.h>
#define PI 3.1415

int main() {
	char figura;
	float radi, altura, base, area;

	printf("Introduzca la descripcion de la figura: ");
	scanf("%c", &figura);

	if ((figura == 't') || (figura == 'T')) {
		scanf("%f %f", &base, &altura);
		area = base * altura / 2;
		printf("Area del triangulo = %0.2f\n", area);
	}

	else if ((figura == 'c') || (figura == 'C')) {
		scanf("%f", &radi);
		area = PI * radi * radi;
		printf("Area del circulo = %0.2f\n", area);
	}

	else {
		printf("El tipo de la figura es incorrecto\n");
	}
}
