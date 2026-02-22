#include <stdio.h>
#include <string.h>

/*
Program that uses structs as function parameters
*/

typedef struct {
	char name[40];
	int age;
	int id;
} student;

void showStudent (student std);
void updateStudent (student *std);
int verifyInt (void);

int main(void) {
	student s1;
	student s2;

	updateStudent (&s1);
	updateStudent (&s2);
	showStudent (s1);
	showStudent (s2);

	return 0;
}

void showStudent (student std){
	printf ("\nStudent: %d", std.id);
	printf ("\nName: %s", std.name);
	printf ("\tAge: %d\n", std.age);
}

void updateStudent (student *std){
	fflush (stdin); //cleans the buffer, maybe works only on windows OS

	puts ("Type the student's name: ");
	fgets (std -> name, sizeof(std -> name), stdin);
	std -> name [strcspn(std -> name, "\n")] = 0; //removes "\n" in the string, makes it into 0 ===> std -> name["\n"_position_index] = 0

	printf ("Type the student's age: ");
	std -> age = verifyInt ();
	printf ("Type the student's id: ");
	std -> id = verifyInt ();
}

int verifyInt (void){
	int num;
	while (scanf("%d", &num) != 1){ //verify if entering is an integer
		puts ("Invalid input, try again:");
		fflush (stdin);
	}
	return num;
}