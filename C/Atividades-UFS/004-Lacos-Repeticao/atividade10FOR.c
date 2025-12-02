#include "stdio.h"

int main(){
    double vendasDiarias, montanteOng=0;
    for (int i=1; i<=35; i++){
        scanf("%lf", &vendasDiarias);
        if (vendasDiarias > 5500.00)
            montanteOng += vendasDiarias*0.035;
    }

    printf("O montante destinado a ONG citada eh de %.2lf", montanteOng);
}
