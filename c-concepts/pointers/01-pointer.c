#include <stdio.h>

/*
Program that show different ways that a pointer can be printed
*/
int main() {
	int age;
	int* agePtr = &age;

	printf ("POINTER USAGE/LOGIC\nType a integer value:");
	scanf ("%d", agePtr);
	printf ("%%p print format to agePtr: %p\n", agePtr);
	printf ("%%d print format to *agePtr: %d\n", *agePtr);
	printf ("%%p print format to &age: %p\n", &age);
	printf ("%%d print format to age: %d\n", age);
	printf ("\nagePtr has the same value of &age\n*agePtr has the same value of age");

	return 0;
}