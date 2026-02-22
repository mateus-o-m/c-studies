#include <stdio.h>
#include <string.h>

/*
Program that uses pointer to access structure values/members
*/

typedef struct {
	char name[40];
	int age;
	int id;
} student;

void showStudent (student *std){
	printf ("Student: %d", std -> id);
	printf ("\nName: %s", std -> name);
	printf ("\nAge: %d\n", std -> age);
}

int main() {
	student s1 = {"Johnatam Santos", 17, 8};
	student s2;
	student* s2Ptr = &s2;

	strcpy (s2.name, "Bruna Sousa");
	s2.age = 20;
	s2.id = 16;

	//pointer to num ===> int* numPtr = &num
	showStudent (&s1);
	showStudent (s2Ptr);

	return 0;
}