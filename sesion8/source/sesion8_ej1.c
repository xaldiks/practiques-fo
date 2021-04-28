#include <stdio.h>

#define FILE_IN "Mifichero.txt"

int main() {
	FILE *fp_in;
	int err, val, cont = 0;

	fp_in = fopen(FILE_IN, "r");
	if (fp_in == NULL) {
		printf("Error abriendo %s\n", FILE_IN);
		return -1;
	}
	printf("Datos del fichero %s:\n", FILE_IN);
	
	err = fscanf(fp_in, "%d", &val);
	while (err != EOF) {
		printf("%d	", val);
		err = fscanf(fp_in, "%d", &val);
		if (val < 0) cont++;		
	}
	
	fclose(fp_in);
	printf("\n\nEn el fichero hay %d enteros negativos\n", cont);

}
