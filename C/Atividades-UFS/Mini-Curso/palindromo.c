#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    int countdown, palindromo=1, tamanho;

    scanf("%s", &palavra);

    tamanho = strlen(palavra);
    countdown = tamanho-1;

    for (int i=0; i < tamanho; i++) {
        // Common Check
        if (palavra[i] != palavra[countdown]) {
            palindromo= 0;
        }
        countdown--;
    }

    printf("Palindromo: %s\n", palindromo ? "true" : "false");
}