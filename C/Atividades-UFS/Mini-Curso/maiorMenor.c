#include <stdio.h>

int main(){
    int num[10], x, found=0, maior=0, menor;

    printf("Defina o vetor:\n");

    for (int i=0; i < sizeof(num)/4; i++) {
        scanf("%d", &num[i]);
    }

    printf("Qual número você procura? ");
    scanf("%d", &x);

    menor = num[0];

    for (int i=0; i < sizeof(num)/4; i++) {

        if (!found) {
            if (num[i] == x) {
                printf("Posição: %d\n", i);
                found++;
            }
        }
        
        if (num[i] > maior) {
            maior = num[i];
        } else if (num[i] < menor) {
            menor = num[i];
        }
    }

    if (!found) {
        printf("-1\n");
    }

    printf("Maior número: %d\nMenor número: %d\n", maior, menor);
}