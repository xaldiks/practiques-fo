#include <stdio.h>

int main() {
	char c;

	printf("Introduzca un caracter: ");
	scanf("%c", &c);

	if ((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U')) {
		c = c - 'A' + 'a';	
		printf("Es una letra\nEs una vocal\nNo es una consonante\nEs una mayuscula\nNo es una minuscula\nNo es un digito\n");
		printf("El caracter con la capitalizacion invertida es %c\n", c);
	}

	else if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) {
		c = c + 'A' - 'a';
        printf("Es una letra\nEs una vocal\nNo es una consonante\nNo es una mayuscula\nEs una minuscula\nNo es un digito\n");
        printf("El caracter con la capitalizacion invertida es %c\n", c);
	}
	
	else {

		if ((c >= 'A') && (c <= 'Z')) {
			c = c - 'A' + 'a';
			printf("Es una letra\nNo es una vocal\nEs una consonante\nEs una mayuscula\nNo es una minuscula\nNo es un digito\n");
			printf("El caracter con la capitalizacion invertida es %c\n", c);
		}

		else if ((c >= 'a') && (c <= 'z')) {
            c = c + 'A' - 'a';
            printf("Es una letra\nNo es una vocal\nEs una consonante\nNo es una mayuscula\nEs una minuscula\nNo es un digito\n");
            printf("El caracter con la capitalizacion invertida es %c\n", c);
        }

		else {
			printf("No es una letra\nNo es una vocal\nNo es una consonante\nNo es una mayuscula\nNo es una minuscula\nEs un digito\n");
		}

				
	}

}
