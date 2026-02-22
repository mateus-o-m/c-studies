Struct studies in C language



Struct: user-defined data type, it groups related variables (known as members) of different data types (e.g. int, float, char, etc), even other structs

Declaration:

struct struct\_name {

 	//members

};

Variables assignment:

struct struct\_name var1;

struct sctruc\_name var2;

Declaration using typedef:

typedef struct {

 	//members

} struct\_name;

Variables assignment:

struct\_name var3;

struct\_name var4;



Pointers to structures: works as pointers to variables

Declaration:

struct struct\_name\* structPtr;

Access to structVar memory address:

structPtr = \&structVar;

Access structure member value, "->" is same as deference operator "\*", It access the value of a variable

structPtr -> structMember;



