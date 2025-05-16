/******************************************************************************

O programa recebe 10 números do usuário.

Primeiro, o algoritmo Selection Sort ordena os números em ordem crescente e exibe o vetor ordenado.

Em seguida, o algoritmo Selection Sort ordena os mesmos números, mas agora em ordem decrescente
e exibe o vetor ordenado dessa forma.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[10], i, j, temp;

    // Receber dados do usuário
    for(i = 0; i < 10; i++) {
        printf("Informe um valor: ");
        scanf("%d", &numeros[i]);
    }

    // Algoritmo de ordenação Selection Sort (Ordem Crescente)
    for(i = 0; i < 9; i++) { // Percorre até o penúltimo elemento
        int min = i; // Assume que o menor valor está na posição atual

        // Encontra o menor valor no restante do vetor
        for(j = i + 1; j < 10; j++) {
            if(numeros[j] < numeros[min]) {
                min = j; // Atualiza a posição do menor valor
            }
        }

        // Troca os valores se necessário
        if(min != i) {
            temp = numeros[i];
            numeros[i] = numeros[min];
            numeros[min] = temp;
        }
    }

    // Exibir os dados ordenados em ordem crescente
    printf("Vetor ordenado em ordem crescente: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Algoritmo de ordenação Selection Sort (Ordem Decrescente)
    for(i = 0; i < 9; i++) { // Percorre até o penúltimo elemento
        int max = i; // Assume que o maior valor está na posição atual

        // Encontra o maior valor no restante do vetor
        for(j = i + 1; j < 10; j++) {
            if(numeros[j] > numeros[max]) {
                max = j; // Atualiza a posição do maior valor
            }
        }

        // Troca os valores se necessário
        if(max != i) {
            temp = numeros[i];
            numeros[i] = numeros[max];
            numeros[max] = temp;
        }
    }

    // Exibir os dados ordenados em ordem decrescente
    printf("Vetor ordenado em ordem decrescente: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}