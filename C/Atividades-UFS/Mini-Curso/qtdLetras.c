#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[50], isGone[50], tempChar;
    int qtd[50], count = 0, tempQtd;

    // Pede a palavra
    scanf("%s", &palavra);

    // Para toda letra na palavra
    for (int i = 0; i < strlen(palavra); i++)
    {
        // Checa se a letra já foi buscada
        if (strchr(isGone, palavra[i]) == NULL)
        {
            // Se não foi, então busca e conta
            for (int j = 0; j < strlen(palavra); j++)
            {
                if (palavra[i] == palavra[j])
                {
                    qtd[count]++;
                }
            }
            // Imprime a letra e a quantidade

            // Acrescenta a letra como já buscada
            isGone[count] = palavra[i];
            count++;
        }
    }

    // Transforma isGone em string
    isGone[count] = '\0';

    // Bubble sort
    for (int i = 0; i < strlen(isGone); i++)
    {
        for (int j = 1; j < strlen(isGone) - i; j++)
        {
            if (isGone[i] > isGone[j])
            {
                // isGone Bubble Sort
                tempChar = isGone[j];
                isGone[j] = isGone[i];
                isGone[i] = tempChar;

                // qtd Bubble Sort
                tempQtd = qtd[j];
                qtd[j] = qtd[i];
                qtd[i] = tempQtd;
            }
        }
    }

    for (int i = 0; i < strlen(isGone); i++)
    {
        printf("letra %c: %dx\n", isGone[i], qtd[i]);
    }
}