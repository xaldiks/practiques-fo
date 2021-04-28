#include <stdio.h>

typedef struct {
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char A;
}tpixel;

int main() {
	tpixel p1, p2, pm;

	printf("Introduzca primer pixel (R,G,B,A): ");
	scanf("(%hhu,%hhu,%hhu,%hhu)%*c", &p1.R, &p1.G, &p1.B, &p1.A);
	printf("Introduzca segundo pixel (R,G,B,A): ");
	scanf("(%hhu,%hhu,%hhu,%hhu)%*c", &p2.R, &p2.G, &p2.B, &p2.A);	

	/*
	if ((p1.R + p2.R) % 2 == 1) pm.R = (p1.R + p2.R) / 2 + 1;
	else pm.R = (p1.R + p2.R) / 2;
	if ((p1.G + p2.G) % 2 == 1) pm.G = (p1.G + p2.G) / 2 + 1 ;
	else pm.G = (p1.G + p2.G) / 2; 
	if ((p1.B + p2.B) % 2 == 1) pm.B = (p1.B + p2.B) / 2 + 1;
	else pm.B = (p1.B + p2.B) / 2;
	if ((p1.A + p2.A) % 2 == 1) pm.A = (p1.A + p2.A) / 2 + 1;
	else pm.A = (p1.A + p2.A) / 2;
	*/
	
	pm.R = (p1.R + p2.R) / 2 + (p1.R + p2.R) % 2;
	pm.B = (p1.B + p2.B) / 2 + (p1.B + p2.B) % 2;
	pm.G = (p1.G + p2.G) / 2 + (p1.G + p2.G) % 2;
	pm.A = (p1.A + p2.A) / 2 + (p1.A + p2.A) % 2;
	printf("El valor del pixel medio es: (%hhu,%hhu,%hhu,%hhu)\n", pm.R, pm.G, pm.B, pm.A);
}
