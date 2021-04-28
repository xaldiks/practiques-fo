#include <stdio.h>

int main() {
	float nota,min,max,media=0;
	int aprob=0,susp=0;	

	printf("Introduzca una secuencia de notas finalizada con un valor negativo: ");
	scanf("%f, ", &nota);
	min = nota;
	max = nota;

	while(nota >= 0) {
		if (nota > max) max = nota;
		else if (nota < min) min = nota;
		if (nota >= 5.0) aprob++;
		else susp++;
		media = media + nota;
		scanf("%f, ", &nota);
	}
	media = media / (aprob+susp);
	printf("Nota media: %.2f\n", media);
	printf("Nota mas alta: %.2f\n", max);
	printf("Nota mas baja: %.2f\n", min);
	printf("Numero de aprobados: %d\n", aprob);
	printf("Numero de suspendidos: %d\n", susp);

}
