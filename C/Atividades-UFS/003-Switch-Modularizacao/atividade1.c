#include "stdio.h"
#define KM_TO_MILES 0.621371
#define KG_TO_LBS 2.20462
#define METERS_TO_FEET 3.28084

int main() {
    double quant, resultado;
    int seletor;
    char *unit= "";

    printf("Digite o quantitativo a ser convertido: ");
    scanf("%lf", &quant);

    printf("(1) Km -> Milhas\n(2) Milhas -> Km\n(3) Kg -> Lbs\n(4) M -> Ft\n");
    printf("Escolha a conversao:\n");
    scanf("%d", &seletor);

    switch(seletor) {
        case 1: 
            resultado= quant * KM_TO_MILES;
            unit= "mi";
            break;

        case 2: 
            resultado= quant / KM_TO_MILES; 
            unit= "km";
            break;

        case 3: 
            resultado= quant * KG_TO_LBS;
            unit= "lbs";
            break;

        case 4: 
            resultado= quant * METERS_TO_FEET;
            unit= "ft";
            break;

        default: printf("Conversao invalida!\n"); return -1;
    }

    printf("Resultado: %.2lf%s", resultado, unit);
}