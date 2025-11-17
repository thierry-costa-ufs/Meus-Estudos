#include <stdio.h>
#define LITROS_NO_TANQUE 50.0

/*
float calcular(char tipoDeCalculo, float distanciaPercorrida, float combustivelConsumido, float precoCombustivel) {
    float retorno=0;

    switch (tipoDeCalculo){
        case 'C': // Custo da Viagem
            retorno= combustivelConsumido * precoCombustivel;
            return retorno;
        case 'M': // Consumo médio
            retorno= distanciaPercorrida/combustivelConsumido;
            return retorno;
        case 'A': // Autonomia estimada
            retorno= LITROS_NO_TANQUE * (distanciaPercorrida/combustivelConsumido);
            return retorno;
        case 'Q': // Custo por km
            retorno= (combustivelConsumido*precoCombustivel)/distanciaPercorrida;
            return retorno;
        default: printf("Opcao invalida!"); break;
    }

    return retorno;
}
*/

float custoViagem(float combustivelConsumido, float precoCombustivel) {
    return combustivelConsumido * precoCombustivel;
}

float consumoMedio(float distanciaPercorrida, float combustivelConsumido) {
    return distanciaPercorrida / combustivelConsumido;
}

float autonomiaEstimativa(float distanciaPercorrida, float combustivelConsumido) {
    return LITROS_NO_TANQUE * consumoMedio(distanciaPercorrida, combustivelConsumido);
}

float custoPorKm(float distanciaPercorrida, float combustivelConsumido, float precoCombustivel) {
    return custoViagem(combustivelConsumido, precoCombustivel)/distanciaPercorrida;
}

int main() {
    float distanciaPercorrida=0, combustivelConsumido=0, precoCombustivel=0, resultado;
    char tipoDeCalculo;

    printf("(C) Custo da viagem.\n(M) Consumo Medio.\n(A) Autonomia estimada.\n(Q) Custo por km.\n");
    printf("Qual tipo de calculo voce deseja fazer? ");
    scanf(" %c", &tipoDeCalculo);

    switch(tipoDeCalculo) {
        case 'C':
            printf("A seguir, informe litros consumidos e preco do combustivel: ");
            scanf("%f %f", &combustivelConsumido, &precoCombustivel);
            resultado = custoViagem(combustivelConsumido, precoCombustivel);
            break;

        case 'M':
            printf("A seguir, informe distancia percorrida e litros consumidos: ");
            scanf("%f %f", &distanciaPercorrida, &combustivelConsumido);
            resultado = consumoMedio(distanciaPercorrida, combustivelConsumido);
            break;

        case 'A':
            printf("A seguir, informe distancia percorrida e litros consumidos: ");
            scanf("%f %f", &distanciaPercorrida, &combustivelConsumido);
            resultado = autonomiaEstimativa(distanciaPercorrida, combustivelConsumido);
            break;

        case 'Q':
            printf("A seguir, informe distancia percorrida, litros consumidos e preco do combustivel: ");
            scanf("%f %f %f", &distanciaPercorrida, &combustivelConsumido, &precoCombustivel);
            resultado = custoPorKm(distanciaPercorrida, combustivelConsumido, precoCombustivel);
            break;
            
        default: printf("Opcao invalida!\n"); return -1;
    }

    printf("Resultado: %.2f", resultado);
}