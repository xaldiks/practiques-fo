#include <stdio.h>

typedef struct {
	int id;
	float nota_promedio;
	int fecha_nacimiento; // Formato aaaammdd
	int num_asignaturas_aprobadas;
}testudiante;

int main() {
	testudiante est, best={-1,0,10000000,0};
	int cont=0;

	printf("Id del estudiante: ");
	scanf("%d", &est.id);
	
	while (est.id != -1) {
		printf("Nota promedio: ");
		scanf("%f", &est.nota_promedio);
		printf("Fecha nacimiento (aaaammdd): ");
		scanf("%d", &est.fecha_nacimiento);
		printf("Total de asignaturas aprobadas: ");
		scanf("%d", &est.num_asignaturas_aprobadas);
		printf("\n");		
		
		if (est.num_asignaturas_aprobadas >= best.num_asignaturas_aprobadas) {
			best = est;
		}
		
		if ((est.nota_promedio > 8.5) && (est.num_asignaturas_aprobadas > 10)) {
			cont++;
		}

		printf("Id del estudiante: ");
		scanf("%d", &est.id);
	}
	
	if (best.id == -1) {
		printf("No se han ingresado estudiantes\n");
	}
	else {
		printf("\n");
		printf("Estudiante con mas asignaturas aprobadas:\n");
		printf("Id: %d\n", best.id);
		printf("Nota promedio: %.2f\n", best.nota_promedio);
		printf("Fecha nacimiento: %d\n", best.fecha_nacimiento);
		printf("Total de asignaturas aprobadas: %d\n", best.num_asignaturas_aprobadas);
		printf("Total de estudiantes con nota > 8.5 y mas de 10 asignaturas aprobadas: %d\n", cont);
	}
	
}
