#include <stdio.h>

int main() {
	const char word[] = "abelha";

	for (int i = 0; i < sizeof(word); i++){
		printf ("%c", word[i]);
	}

	return 0;
}