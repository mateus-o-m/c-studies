## Structs

São tipos de dados definidos pelo usuário, que podem conter
variáveis com diferentes tipos de dados, inclusive outras structs

Variáveis do tipo struct são guardadas em blocos contiguos de memória 
#### Formato da `struct`:
```c
struct novaStruct {
   int num;
   float decimal;
   char alfa[23];
   //qualquer outra variável 
   ...
};

//usando typedef
typedef struct {
   Int num;
   float decimal;
   char alfa[23];
   //qualquer outra variável 
   ...
} novaStructTypedef;
```

#### Declarando variáveis de uma `struct`, utilizando a struct `novaStruct` do exemplo acima:
```c
//declarando
struct novaStruct n1;

//declarando e incicializando n2
novaStructTypedef n2 = {2, 4.7, "ABCDEF"};

/*declaramdo e inicializando utilizando ordem personalizada
novaStructTypedef n2 = {.alfa = "ABCDEF", .num = 2, .decimal = 4.7}; 
*/

//inicializando n1
n1.num = 20;
n1.decimal = 1.0;
sprintf (n1.alfa, "abcdef")

/*utilizando conversão explicita de tipo
n1 = (novaStruct) {20, 1.0, "abcdef"};
*/
```