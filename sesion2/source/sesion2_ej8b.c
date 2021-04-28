#include <stdio.h>

int main() {
	int hores, minuts, segons;

	printf("Introduzca una hora en formato hh:mm:ss: ");
	scanf("%d:%d:%d", &hores, &minuts, &segons);

	if ((segons == 59) && (minuts == 59) && (hores == 23)) {
		segons = 0;
		minuts = 0;
		hores = 0;
	}

	else if ((segons == 59) && (minuts == 59)) {
		segons = 0;
		minuts = 0;
	}

	else if (segons == 59) {
		segons = 0;
		minuts++;
	}

	else {
		segons++;
	}

/*
 * segons++;
 * 
 * if (segons == 60) {
 *     minuts++;
 *	   segons = 0;
 *
 *     if (minuts == 60) {
 *	       hores++;
 *		   minuts = 0;
 *	
 *		   if (hores == 24) {
 *		       hores = 0;
 *		   }
 *	   }
 * }
 */
	printf("%02d:%02d:%02d\n", hores, minuts, segons);

}
