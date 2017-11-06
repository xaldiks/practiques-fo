#include <stdio.h>
#define MIN 10001
#define MAX 112017
// #define MAX 12999

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
	tciudad ciu, mayor, menor;

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
		scanf("%d", &ciu.fundacion);
		while ((ciu.fundacion < MIN) || (ciu.fundacion > MAX)) {
			printf("Mes invalido. Ingrese nuevamente la fecha de fundacion: ");
			scanf("%d", &ciu.fundacion);
		}
		printf("Costera o Interior: ");
		scanf("%c", &ciu.ubicacion);
		
		// Almacenar superficie y habitantes
		superficie = superficie + ciu.area;
		habitantes = habitantes + ciu.habitantes;	
		
		// Comprobar ciudades
		
	}	

}
