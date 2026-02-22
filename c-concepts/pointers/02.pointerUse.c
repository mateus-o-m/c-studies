#include <stdio.h>

void divide (int* num1, int* num2, int divisor) {
	*num1 /= divisor;
	*num2 /= divisor;
}

int main() {
	int num1 = 150;
	int num2 = 200;
	int divisor = 2;

	divide (&num1, &num2, divisor);
	printf ("%d, %d", num1, num2);

	return 0;
}