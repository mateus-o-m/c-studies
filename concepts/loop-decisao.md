## Interruptores

O `break;` interrompe a execução de loops ou tomadores de decisão
A instrução `continue;` pula a iteração atual de um loop e vai para a próxima

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
