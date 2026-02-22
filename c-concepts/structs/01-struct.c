#include <stdio.h>
#include <locale.h>

/*
Program that shows struct usage
*/

struct car {
	int id;
	char plate[7];
	float value;
};

typedef struct {
	struct car ownCar;
	char name[40];
	int age;
	int id;
} driver;

int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	//declaring + assigning
	struct car c1 = {478, "1209AB", 2000.45};
	struct car c2 = {.value = 50000.99, .id = 540, .plate = "3487CD"};

	//declaring struct variables
	driver d1;
	driver d2;

	//members assignment
	sprintf (d1.name, "Carlos Barros");
	d1.age = 20;
	d1.id = 123;
	d1.ownCar = c2;
	//type cast
	d2 = (driver){c1, "Bruno Almeida", 30, 136};

	printf ("STRUCT USAGE SAMPLE");
	printf ("\nDriver name: %s\tDriver age: %d\tDriver id: %d\n",
		d1.name, d1.age, d1.id);
	printf ("\tCar id: %d\tCar plate: %s\tCar value: %.2f\n",
		d1.ownCar.id, d1.ownCar.plate, d1.ownCar.value);
	printf ("\nDriver name: %s\tDriver age: %d\tDriver id: %d\n",
		d2.name, d2.age, d2.id);
	printf ("\tCar id: %d\tCar plate: %s\tCar value: %.2f\n",
		d2.ownCar.id, d2.ownCar.plate, d2.ownCar.value);

	d1.ownCar = d2.ownCar;
	d2.ownCar = c2;

	printf ("\nCars have been traded");
	printf ("\nDriver name: %s\tDriver age: %d\tDriver id: %d\n",
		d1.name, d1.age, d1.id);
	printf ("\tCar id: %d\tCar plate: %s\tCar value: %.2f\n",
		d1.ownCar.id, d1.ownCar.plate, d1.ownCar.value);
	printf ("\nDriver name: %s\tDriver age: %d\tDriver id: %d\n",
		d2.name, d2.age, d2.id);
	printf ("\tCar id: %d\tCar plate: %s\tCar value: %.2f\n",
		d2.ownCar.id, d2.ownCar.plate, d2.ownCar.value);

	return 0;
}