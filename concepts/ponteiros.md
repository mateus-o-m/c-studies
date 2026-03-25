## Ponteiros

Ponteiro é uma variável que salva, como seu valor,o endereço de memória de outra variável

Formato exemplo: `int *xPtr = &x;`
 * `xPtr`: é um pointeiro para o `int x`

#### Operadores:
 * `*`: deferência, retorna o valor armazenado
em um endereço de memória 
 * `&`: referência, retorna o endereço de memória de uma variável

Arrays: um ponteiro para array aponta para seu primeiro elemento,
ou seja, incrementar um ponteiro é uma maneira de iterar
sobre um array
 * Ex: `*x`, aponta para `x[0]`
 * Ex: `*(x + 3)`, aponta para `x[3]`

### Uso em funções

Podem ser usados para retornar mais de um valor
#### Exemplo:
```c
void calculos (int &num1, int &num2){
   //cálculos 

   *num1;
   *num2;
}
```