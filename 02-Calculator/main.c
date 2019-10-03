// main.c

#include <stdio.h>
#include "calculator.h"

int main()
{
   int a;
   int b;

   printf("Introduce el número a:");
   scanf("%d", &a);
   printf("Introduce el número b:");
   scanf("%d", &b);

   printf("La suma de a %d y b: %d es %d\n",a, b, add(a, b));
   printf("La resta de a: %d y b: %d es %d\n",a, b, minus(a, b));
   printf("La multiplicación de a: %d y b: %d es %d\n",a, b, multiply(a, b));
   printf("La división de a: %d y b: %d es %d\n",a, b, divide(a, b));
   return 0;
}
