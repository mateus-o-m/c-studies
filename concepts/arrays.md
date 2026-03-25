## Arrays

Conjunto com variáveis de mesmo tipo

Formato: `<tipoDoDado> nomeArray [quantidadeItens];`

Valores são acessados via índice:
 * Ex: `numeros[4]`, acessa o quinto item do array `numeros`
Atribuição de múltiplos valores:
 * Ex: `int nums[] = {n1, n2, ..., nN};`
   * Automaticamente cria um array com N itens
Array multidimensional:
 * Formato: `<tipoDeDado> nomeArray [x][y][z];`

### Strings

É um array de caracteres:

Formato: `char ola[] = "Olá mundo";`

Input de strings, o tamanho do array deve ser especificado antes:
 * Usando `scanf()`: se o input tiver espaços, somente os caracteres antes
do primeiro espaço serão salvos
#### Exemplo:
```c
char palavra[30];
scanf ("%s", palavra);
```
 * Usando `fgets()`: salva todos os caracteres digitados, excluindo caractere escape
#### Exemplo:
```c
char palavra[30];
fgets (palavra, 30, stdin);
```