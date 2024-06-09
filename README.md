## Ponteiros em C

## O que é um ponteiro?

Um ponteiro é uma variável cujo valor é o endereço de outra variável na memória. Os ponteiros são extremamente poderosos e versáteis, permitindo manipulação direta de memória e a criação de estruturas complexas, como listas encadeadas e árvores.

## Declaração de Ponteiros

Para declarar um ponteiro, usamos o operador `*` antes do nome da variavel. Por exemplo: 

```c
int *ptr;
```

## Atribuição de Endereços

Um ponteiro pode ser atribuido ao endereço de uma variavel usando o operador `&` (endereço de):

```c
int valor = 10;
int *ptr = &valor;
```

## Acessando Valores Usando Ponteiros

Podemos acessar o valor armazenado no endereço apontando por um ponteiro usando o operador `*` (desreferência):

```c
// Função para trocar os valores de duas variáveis inteiras
void troca(int *a, int *b){
    // Declara uma variável temporaria para armazenar o valor de *a
    int temp = *a;

    // Atribui o valor de *b para *a
    *a = *b;

    // Atribui o valor armazenado em temp (inicialmente *a) para *b
    *b = temp; 
}
```
---
Ponteiros são uma parte fundamental da programação em C, oferecendo grande flexibilidade e controle sobre a memória. Compreender ponteiros é essencial para o desenvolvimento de software eficiente e complexo em C.
