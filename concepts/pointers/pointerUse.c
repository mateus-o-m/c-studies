#include <stdio.h>

/*
Programa que utiliza ponteiros para retornar multiplos valores em funções void
*/
void divide (int* num1, int* num2, int divisor) {
   *num1 /= divisor;
   *num2 /= divisor;
}

int main() {
   int num1, num2;
   int divisor;

   printf ("MULTIPLE VALUES RETURNING FROM A FUNCTION\nType a integer value: ");
   scanf ("%d", &num1);
   printf ("Type another integer value: ");
   scanf ("%d", &num2);
   printf ("Type a integer divisor: ");
   scanf ("%d", &divisor);

   printf ("Numbers before integer divison: %d, %d\n", num1, num2);
   divide (&num1, &num2, divisor);
   printf ("Numbers after integer division by %d: %d, %d", divisor, num1, num2);

   return 0;
}