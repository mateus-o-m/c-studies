#include <stdio.h>


int main() {
	int x[] = {15, 21, 32, 40};
	int* ptrX = x;

	printf ("%d\n", *(x + 1));

	for (int i = 0; i < 4; i ++){
		printf ("%d \n", *ptrX);
		ptrX ++;
	}

	ptrX = x;
	printf ("%d", *ptrX);

	return 0;
}