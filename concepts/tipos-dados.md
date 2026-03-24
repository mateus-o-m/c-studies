## Tipos de dados

 * `int`: para números inteiros
 * `float`: para números decimais, com no máximo 7 digitos decimais
 * `double`: para números decimais, com no máximo 15 digitos decimais
 * `char`: para caractere único
 * `string`: para múltiplos caracteres
 * `struct`: definido pelo usuário, pode conter vários tipos de dados

### Modificadores/especificadores

 * `long`: pode ser usado com tipos `int` ou `double`. Não pode ser usado com `float`
   * `lomg int` ou `long`: aumenta precisão de `int` para 32 bit
   * `lomg long int` ou `long long`: aumenta para 64 bits
   * `long double`: aumenta precisão de double
 * `umsigned`
 * `const`: define que o valor de uma variável não poderá ser mudado
   * Exemplo: `const int numConst = 5; // numConst valerá sempre 5`
 * `typedef`: define um nome personalizável para tipos
longos/complexos de dados
   * Exemplo: `typedef unsigned long double ulongd`