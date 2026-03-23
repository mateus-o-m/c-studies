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
 * `%p`: para números hexadecimais (endereços de memória)

### Caracteres especiais

 * `\n`: pula para a próxima linha
 * * Exemplo: `printf ("Linha acima\nLinha abaixo");`

## Entrada de dados

### Função `scanf()`

Pega input do usuário baseado em um especificador de formato
Formato: `scanf ("especificador", endereço_da_variavel);`

### Função `fgets()`

Para input de strings, consegue salvar vários caracteres,
incluindo espaços
Formato: `fgets (nomeString, tamanhoString, tipoEntrada);`
 * `tipoEntrada` normalmente é o stdin (via teclado do usuário)
