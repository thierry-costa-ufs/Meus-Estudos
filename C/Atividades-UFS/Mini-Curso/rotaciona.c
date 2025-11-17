#include "stdio.h"

int main(){
    int n, k, temp;
    printf("A seguir, escolha a quantidade de numeros na array e a quantiadde de rotações(nessa ordem): ");
    scanf("%d %d", &n, &k);
    int array[n];

    // Escolher os numeros de array[n]
    for (int i=0; i < n; i++) {
        printf("Escolha o numero na posição %d: \n", i);
        scanf("%d", &array[i]);
    }

    // Qunatidade de vezes que vai rotacionar
    for (int i=0; i < k; i++) {
        // Rotação do vetor
        for (int j=n-1; j >= 0; j--) {
            if (j+1 == n) {temp = array[j]; continue;}
            array[j+1]= array[j];
            if (j == 0) array[j] = temp;
        }
    }

    printf("[");
    for (int i=0; i < n; i++) {
        if (i+1 == n) {
            printf("%d", array[i]);
        } else {
            printf("%d, ", array[i]);
        }
    }
    printf("]\n");
}