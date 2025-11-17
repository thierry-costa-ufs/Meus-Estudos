#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int adivinha(int min, int max) {
    char symbol;
    int guess = (rand() % (max -min + 1)) + min;
    
    printf("meu chute é: %d!\nfoi maior, menor ou igual ao seu número?\n", guess);

    scanf(" %c", &symbol);
    
    if (symbol == '>') {
        printf("maior? poxa, vou tentar novamente!\n");
        return adivinha(min, guess-1);
    }
    else if (symbol == '<') {
        printf("menor? poxa, vou tentar novamente!\n");
        return adivinha(guess+1, max);
    }
    else if (symbol == '=') {
        return guess;
    }
    else {
        printf("resposta inválida\n");
        return adivinha(min, max);
    }
    
    return 0;
}

int main(){
    srand(time(NULL));
    int resultado = adivinha(1,1000);

    printf("Acertei! o número era: %d\n", resultado);

    return 0;
}
