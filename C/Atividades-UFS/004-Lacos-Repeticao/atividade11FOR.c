#include "stdio.h"

int main() {
    int qtdMeses, vendaMensal;
    double somaTotal=0.0, mediaVendas;
    
    scanf("%d", &qtdMeses);
    
    for (int i=0; i<qtdMeses; i++){
        scanf("%d", &vendaMensal);
        somaTotal += vendaMensal;
    }
    
    mediaVendas= somaTotal/qtdMeses;
    printf("Media de vendas da sequência: %.2lf", mediaVendas);
}
