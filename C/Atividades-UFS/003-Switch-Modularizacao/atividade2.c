#include "stdio.h"
#define KM_TO_MILES 0.621371
#define KG_TO_LBS 2.20462
#define METERS_TO_FEET 3.28084

double kmToMiles(double quant) {
    return quant*KM_TO_MILES;
}

double milesToKm(double quant) {
    return quant/KM_TO_MILES;
}

double kgToLbs(double quant) {
    return quant*KG_TO_LBS;
}

double metersToFeet(double quant) {
    return quant*METERS_TO_FEET;
}

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
            resultado= kmToMiles(quant);
            unit= "mi";
            break;

        case 2: 
            resultado= milesToKm(quant); 
            unit= "km";
            break;

        case 3: 
            resultado= kgToLbs(quant);
            unit= "lbs";
            break;

        case 4: 
            resultado= metersToFeet(quant);
            unit= "ft";
            break;
            
        default: printf("Conversao invalida!\n"); return -1;
    }

    printf("Resultado: %.2lf%s", resultado, unit);
}