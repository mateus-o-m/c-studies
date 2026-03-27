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

### Ponteiros para structs

Declarando um ponteiro: `struct umaStruct *structPtr`

Guardando o endereço de uma `struct`: `structPtr = &struct`

Acessando o valor de um membro da `struct`: `structPtr -> membroDaStruct`
 * Oitra maneira de acessar um membro: `(*structPtr).membroDaStruct`
 * Exemplo de membros de structs: `.num`, `.nome`, `.decimal`

### Structs como parâmetros de funções 

Passar uma `struct` por valor, cria uma cópia dessa `struct` para ser usada na função. Os valores dos membros da `struct` não serão alterados

Passar uma `struct` por referência, usando ponteiros (`&struct`), permite a alteração dos valores de membros dessa  `struct`

#### Exemplo de ponteiros e `struct` como parâmetros de funções:
```c
#include <stdio.h>
#include <string.h>

typedef struct{
   char name[50];
   int age;
} pessoa;

void atualizarPessoa (pessoa *ps);
void mostrarPessoa (pessoa ps);

int main(){
   pessoa umaPessoa;

   atualizarPessoa (&umaPessoa);
   mostrarPessoa (umaPessoa);

   return 0;
}

void atualizarPessoa (pessoa *ps){
   strcpy (ps -> name, "Roberto Ramos");
   ps -> age = 30;
}

vois mostrarPessoa (pessoa ps){
   printf ("Nome: %s\nIdade: %d\n", ps.name, ps.age);
}
```

### Array de structs

Arrays guardam elememntos de qualquer tipo, incluindo structs
 * Formato: `struct structName structVar [numberOfElemnts]`

#### Exemplo:
```c
#include <stdio.h>

typedef struct{
   char name[50];
   int age;
} pessoa;

int main(){
   pessoa pessoas[5];

   for (k = 0; k < 3; k++) {
      volume = boxes[k].h*boxes[k].w*boxes[k].l;
      printf("box %d volume %d\n", k, volume);
   }

   return 0;
}

```