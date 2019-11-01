// main.c

#include <stdio.h>
#include "calculator.h"

int main()
{
   int a;
   int b;

   printf("Introduce number a:");
   scanf("%d", &a);
   printf("Introduce number b:");
   scanf("%d", &b);

   printf("Sum of %d + %d = %d\n",a, b, add(a, b));
   printf("Substraction of %d - %d = %d\n",a, b, minus(a, b));
   printf("Multiplication of %d * %d = %d\n",a, b, multiply(a, b));
   printf("Division of %d / %d = %d\n",a, b, divide(a, b));
   return 0;
}
