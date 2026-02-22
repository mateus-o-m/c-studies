#include <stdio.h>

int main() {
	int age;
	int* p = &age;

	scanf ("%d", p);
	printf ("%%p, p: %p\n", p);
	printf ("%%d, *p: %d\n", *p);
	printf ("%%p, &age: %p\n", &age);
	printf ("%%d, age: %d\n", age);

	return 0;
}