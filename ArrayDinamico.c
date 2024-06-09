#include "stdlib.h" 
#include "stdio.h"  

int main() {
    int n = 10; // Declaração e inicialização da variável que define o tamanho do array
    // Aloca dinamicamente memória suficiente para 'n' inteiros
    int *array = (int *)malloc(n * sizeof(int));

    // Variáveis de controle para os loops
    int i = 0;
    int j = 0;

    // Loop para preencher o array com valores múltiplos de 10
    for (i = 0; i < n; i++) {
        array[i] = i * 10; // Atribui a cada elemento do array o valor de 'i' multiplicado por 10
    }

    // Loop para imprimir os valores do array
    for (j = 0; j < n; j++) {
        printf("%d\n", array[j]); // Imprime o valor do elemento 'j' do array, seguido por uma nova linha
    }

    // Libera a memória alocada dinamicamente para evitar vazamento de memória
    free(array);

    return EXIT_SUCCESS;
}
