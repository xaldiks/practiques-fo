#include <stdio.h>
#define MIN 10001
#define MAX 129999

typedef struct {
	int id;
	float area;
	int habitantes;
	int edad;
	int fundacion; // mmaaaa
	char ubicacion;
}tciudad;

int main() {
	int i, habitantes = 0;
	float superficie = 0;
	tciudad ciu, mayor={-1,0,0,0,0,'a'}, menor={-1,510100000,0,0,0,'a'};

	for (i = 10; i > 0; i--) {
		// Recibir datos
		printf("Identificador: ");
		scanf("%d", &ciu.id);
		printf("Superficie: ");
		scanf("%f", &ciu.area);
		printf("Numero de habitantes: ");
		scanf("%d", &ciu.habitantes);
		printf("Edad media: ");
		scanf("%d", &ciu.edad);
		printf("Fecha fundacion (mmaaaa): ");
		scanf("%d%*c", &ciu.fundacion);
		while ((ciu.fundacion < MIN) || (ciu.fundacion > MAX)) {
			printf("Mes invalido. Ingrese nuevamente la fecha de fundacion: ");
			scanf("%d%*c", &ciu.fundacion);
		}
		printf("Costera o Interior: ");
		scanf("%c", &ciu.ubicacion);
		printf("\n");		
	
		// Almacenar superficie y habitantes
		superficie = superficie + ciu.area;
		habitantes = habitantes + ciu.habitantes;	
		
		// Comprobar ciudades
		if (ciu.area > mayor.area) {
			mayor = ciu;
		}
		else if (ciu.area < menor.area) {
			menor = ciu;
		}
	}
	
	superficie = superficie / 10;
	printf("Superficie media: %.2f\n", superficie);
	printf("Total habitantes: %d\n\n", habitantes);
	printf("Ciudad de mayor superficie:\n");
	printf("Id = %d superficie = %.2f poblacion = %d edad promedio = %d fundacion = %d tipo = %c\n\n\n", mayor.id, mayor.area, mayor.habitantes, mayor.edad, mayor.fundacion, mayor.ubicacion);
	printf("Ciudad de menor superficie:\n");
	printf("Id = %d superficie = %.2f poblacion = %d edad promedio = %d fundacion = %d tipo = %c\n", menor.id, menor.area, menor.habitantes, menor.edad, menor.fundacion, menor.ubicacion);
}
