#include <stdio.h>

int main() {
	int k=7, resi;
	char c='a', resc;
	float f=5.5, g=-3.25, resf;

	resi = -2 + k;
	printf("%d\n", resi);
	
	resi = resi + 2;
	printf("%d\n", resi);
	
	resc = c;
	printf("%c\n", resc);
	
	resi = k % 5;
	printf("%d\n", resi);
	
	resf = (f - g) / 2;
	printf("%f\n", resf);

	resi = resi * (k - 3);
	printf("%d\n", resi);

	resf = k / (resi - 2);
	printf("%f\n", resf);

	resf = f / (resi - 2);
	printf("%f\n", resf);

	resi = 2 * (k - 3) % 3 / 2;
	printf("%d\n", resi);
	
}	
