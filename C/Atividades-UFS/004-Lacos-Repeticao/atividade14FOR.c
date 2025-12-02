#include "stdio.h"
#include "math.h"
#define CAPACIDADE_CAMINHAO 10000.0

int main() {
    double demandaMorador, somaDemandas=0.0, qtdViagens;

    for (int i=1; i<=60; i++) {
        scanf("%lf", &demandaMorador);
        somaDemandas += demandaMorador;
    }
    
    qtdViagens= somaDemandas/CAPACIDADE_CAMINHAO;
    printf("cerca de %.2lf viagens", (qtdViagens != (int)qtdViagens) ? (int)qtdViagens+1:(int)qtdViagens);
}
