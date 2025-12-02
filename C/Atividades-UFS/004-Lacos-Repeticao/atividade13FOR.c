#include "stdio.h"

int main() {
    float notaAluno, notasMedias;

    for (int i=1; i<=150; i++) {
        notasMedias=0.0;
        
        for (int j=1; j<=12; j++) {
            scanf("%f", &notaAluno);
            if (notaAluno >= 6)
                notasMedias++;
        }
        
        if (notasMedias >= 7)
            printf("Media do estudante %d: aprovado", i);
        else
            printf("Media do estudante %d: reprovado", i);
    }
}
