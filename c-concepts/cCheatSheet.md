## Estrutura do código

Esqueleto da estrutura básica:
```c
// inclusão de biblioteca(s)
# include <biblioteca1.h>
# include <biblioteca2.h>

int funcao1 (argumentos){
   // corpo da função
}
int funcao2 (argumentos){
   // corpo da função
}

// função incicial do programa, ponto de partida
int main (){
   /*
   corpo da função
   */

   return 0; // final do programa
}
```

## Tipos de dados

 * `int`: para números inteiros
 * `float`: para números decimais, com no máximo 7 digitos decimais
 * `double`: para números decimais, com no máximo 15 digitos decimais
 * `char`: para caractere único
 * `string`: para múltiplos caracteres

### Modificadores

 * `const`: define que o valor de uma variável não poderá ser mudado
 * * Exemplo: `const int numConst = 5; // numConst valerá sempre 5`

## Saída de dados

### Função `printf()`

Disponível na biblioteca `stdio.h`
O `printf()` imprime uma mensagem no terminal
Formato: `printf ("mensagem", parametros);`

### Especificadores de formato

 * `%d`: para tipo `int`
 * * Exemplo: `printf ("Idade: %d", 9);`
 * `%f`: para tipo `float`
 * * Exemplo: `printf ("Pi: %.2f", 3.14);`
 * `%lf`: para tipo `double`
 * * Exemplo: `printf ("Um número bem preciso: %lf", 0.62346223);`
 * `%c`:  para tipo `char`
 * * Exemplo: `printf ("Primeira letra: %c", 'A');`
 * `%s`:  para tipo `string`
 * * Exemplo: `printf ("Faz mel: %s", "Abelha");`

### Caracteres especiais

 * `\n`: pula para a próxima linha
 * * Exemplo: `printf ("Linha acima\nLinha abaixo");`

## Entrada de dados

### Função `scanf()`

Pega input do usuário baseado em um especificador de formato
Formato: `scanf ("especificador", endereço_da_variavel);`

## Operadores

Matemáticos:
 * `+`: adição
 * `-`: subtração
 * `*`: multiplicação
 * `/`: divisão
 * * Por inteiros: `div = 7/2 // resultará em 3`
 * * Por decimais: `div = 7.0/2.0 // resultará em 3.5`
 * `%`: módulo, resto de uma divisão por inteiros
 * * Exemplo: `mod = 7%2 // resultará em 1`

Matemáticos abreviados:
 * 'var <opMat>= value': mesmo que `var = var <opMat> value`
 * * Ex: `num += 4` é o mesmo que `num = num + 4`
 * * Ex: `num *= 2` é o mesmo que `num = num * 2`

De comparação:
 * `<`: menor que
 * `>`: menor que
 * `==`: igual à
 * `<=`: menor ou igual à
 * `>=`: maior ou igual à

Lógicos:
 * `&&`: AND lógico
 * `||`: OR lógico
 * `!`: NOT logico

## Tomada de decisão

Instrução `if-else`
 * Formato:
```c
if (condição){
   // código se condição == True
} else if (condição){
   // código se condição == True
} else {
   // código se nenhuma condição for atendida
}
```

Instrução `switch-case`
 * Formato:
```c
switch (variável){
   case valor1:
      // código se valor foe 1
      break;
   ...
   case valorN:
      // código se valor for n 
      break;
   default:
      // código se nenhum valor for compatível com o da variável 
}
```

Interruptore

## Loops

Loop `while`:
```c
while (comdicao){
   /*
   enquanto a condicao for verdadeira,
   executa esse código
   */
}
```
Variação `do-while`, garante que o loop `while` execute pelo menos uma vez:
```c
do {
   /*
   código que será executado antes de verificar a condicao,
   e enquanto a condicao for verdadeira
   */
} while (condicao);
```

Loop `for`:
```c
for (inicializacao; comdicao/termino; incremento/decremento){
   /*
   código que será executado até que a condicao for verdadeira
   */
}
```