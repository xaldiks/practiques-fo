#include <stdio.h>

int main() {
	int a,b,c,d,e,f,g;

	a = 5/2 + 20%6;
	b = 4*6/2 - 15/2;
	c = 5*15/2/(4 - 2);
	d = 8 == 16 || 7 != 4 && 4 < 1;
	e = (4*3 < 6 || 3 > 5 - 2) && 3 + 2 < 12;
	f = 2 || 0;
	g = 1 && 0;

	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", a,b,c,d,e,f,g);	
}
