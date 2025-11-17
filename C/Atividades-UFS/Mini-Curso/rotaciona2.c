#include "stdio.h"

int main(){
    // Variaveis-nucleo
    int tamanho, rotacoes=0, temporario;
    // Variaveis de contagem
    int emOrdem, quebras=0;

    // Input
    printf("A seguir, escolha a quantidade de numeros no vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho invalido");
        return 0;
    }

    int vetor[tamanho];

    // Preencher vetor
    for (int i=0; i < tamanho; i++) {
        printf("Escolha o numero na posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Quebras de bloco
        // Checa se eh quase ordenado
        for (int i=0; i < tamanho; i++) {
            if (vetor[i] > vetor[(i+1)%tamanho]) quebras++;
        }

        // Se tiver muitas finaliza
        if (quebras > 1) {
            printf("Impossivel ordenar por rotações\n");
            return 0;
        }

    // Ordem
        // Checa o quão fora de ordem esta
        emOrdem = 1;
        for (int i=0; i < tamanho-1; i++){
            if (vetor[i+1] >= vetor[i]) emOrdem++;
        }

        // Se estiver ordenado finaliza
        if (emOrdem == tamanho) {
            printf("Nenhuma rotação necessaria\n");
            return 0;
        }

    // Enquanto não estiver ordenado
    while (emOrdem != tamanho) {
        // Reseta contagem da ordenação
        emOrdem=1;
        
        // Rotaciona o vetor
        for (int j=tamanho-1; j >= 0; j--) {
            // Se a proxima posição for indice invalido apenas armazena e segue pra proxima
            if (j+1 == tamanho) {temporario = vetor[j]; continue;}
            // Guarda numero atual na proxima posição
            vetor[j+1]= vetor[j];
            // Se estiver na primeira posição coloca o indice anteriormente armazenado
            if (j == 0) vetor[j] = temporario;
        }

        // Atualiza a ordenação do vetor p/ checagem
        for (int i=0; i < tamanho-1; i++) {
            if (vetor[i+1] >= vetor[i]) emOrdem++;
        }

        // Atualiza contador p/ quantidade de rotações
        rotacoes++;
    }

    // Imprime a lista ordenada
    printf("[");
    for (int i=0; i < tamanho; i++) {
        if (i+1 == tamanho) {
            printf("%d", vetor[i]);
        } else {
            printf("%d, ", vetor[i]);
        }
    }
    printf("]\n");

    // Imprime a quantidade de rotações
    printf("%d rotações foram necessarias\n", rotacoes);
}
