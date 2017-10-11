#include <stdio.h>

main()
{
   int a, b, aux;

   printf("Introduzca dos valores para las variables a y b: ");
   scanf("%d %d%*c", &a, &b);

   /* Complete el programa */
  
   b = a + b;
   a = b - a;
   b = b - a;



   
   printf("Variable a: %d\n", a);
   printf("Variable b: %d\n", b);
}
