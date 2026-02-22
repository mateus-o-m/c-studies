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

int main() {
	student s1;
	student s2;

	updateStudent (&s1);
	updateStudent (&s2);
	showStudent (s1);
	showStudent (s2);

	return 0;
}

void showStudent (student std){
	printf ("Student: %d", std.id);
	printf ("\nName: %s", std.name);
	printf ("\nAge: %d\n", std.age);
}

void updateStudent (student *std){
	puts ("Type the student's name: ");
	//scanf ("%39s", std -> name); //%39s limits array size to 39
	printf ("Type the student's age: ");
	if (scanf ("%d", &std -> age) != 1){ //verify if the input is an integer(%d)
		puts ("Invalid input, try again");
		return;
	}
	printf ("Type the student's id: ");
	if (scanf ("%d", &std -> id) != 1){
		puts ("Invalid input, try again");
		return;
	}
}

int verifyInt (int* num){
	
}