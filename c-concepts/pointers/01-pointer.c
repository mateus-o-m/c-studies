#include <stdio.h>

<<<<<<< HEAD
<<<<<<< HEAD
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
=======
=======
/*
Program that show different ways that a pointer can be printed
*/
>>>>>>> 76ae8f9 (Adding visual description of whats the program is doing)
int main() {
	int age;
	int* agePtr = &age;

<<<<<<< HEAD
	scanf ("%d", p);
	printf ("%%p, p: %p\n", p);
	printf ("%%d, *p: %d\n", *p);
	printf ("%%p, &age: %p\n", &age);
	printf ("%%d, age: %d\n", age);
>>>>>>> b8341d3 (Reestructuring .c files)
=======
	printf ("POINTER USAGE/LOGIC\nType a integer value:");
	scanf ("%d", agePtr);
	printf ("%%p print format to agePtr: %p\n", agePtr);
	printf ("%%d print format to *agePtr: %d\n", *agePtr);
	printf ("%%p print format to &age: %p\n", &age);
	printf ("%%d print format to age: %d\n", age);
	printf ("\nagePtr has the same value of &age\n*agePtr has the same value of age");
>>>>>>> 76ae8f9 (Adding visual description of whats the program is doing)

	return 0;
}