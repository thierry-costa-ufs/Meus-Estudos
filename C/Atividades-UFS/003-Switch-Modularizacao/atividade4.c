#include <stdio.h>

int divisaoIgualSimples(float valorTotal, float parcelaDosEstudantes[]) {
    for (int i=0; i < 4; i++) {
        parcelaDosEstudantes[i]= valorTotal/4;
    }
    
    return 0;
}

int divisaoPropocionalConsumo(float valorTotal, float parcelaDosEstudantes[], float consumosDosEstudantes[]) {
    float somaDosConsumos=0;

    for (int i=0; i<4; i++) {
        if(consumosDosEstudantes[i] < 0) {
            printf("ERRO! ALERTA CONSUMO NEGATIVO");
            return -1;
        }

        somaDosConsumos += consumosDosEstudantes[i];
    }

    if (somaDosConsumos != 1.0f || somaDosConsumos < 0) {
        printf("ERRO! Soma dos consumos inválida.\n");
        return -1;
    }

    for (int i=0; i < 4; i++) {
        parcelaDosEstudantes[i]= valorTotal * consumosDosEstudantes[i];
    }

    return 0;
}

int rateioPesosDiferentes(float valorTotal, float parcelaDosEstudantes[], float pesosDosEstudantes[]) {
    float somaDosPesos=0;

    for (int i=0; i<4; i++) {
        somaDosPesos += pesosDosEstudantes[i];
    }

    if (somaDosPesos <= 0) {
        printf("ERRO! Soma dos pesos inválida (negativa ou zero).\n");
        return -1;
    }

    for (int i=0; i < 4; i++) {
        parcelaDosEstudantes[i]= valorTotal * pesosDosEstudantes[i]/somaDosPesos;
    }

    return 0;
}

int main() {
    //DECLARAÇÃO & ENTRADA
    float valorTotal, parcelasDosEstudantes[4], consumosDosEstudantes[4], pesosDosEstudantes[4];
    int tipoDeDivisao, status;

    printf("A seguir, defina o tipo de divisao e o valor total:\n");
    printf("(1) Divisao Igual Simples.\n(2) Divisao Proporcional ao consumo.\n(3) Rateio com pesos diferentes.\n");
    scanf("%d %f", &tipoDeDivisao, &valorTotal);

    //SWITCH CASE
    if (valorTotal > 0) {
        switch(tipoDeDivisao) {
            case 1: 
                status= divisaoIgualSimples(valorTotal, parcelasDosEstudantes); break;
            
            case 2:
                //ENTRADA
                for (int i=0; i<4; i++) {
                    printf("Consumo do estudante %d: ", i+1);
                    scanf("%f", &consumosDosEstudantes[i]);
                }

                //APP
                status= divisaoPropocionalConsumo(valorTotal, parcelasDosEstudantes, consumosDosEstudantes); 
                break;

            case 3:
                //ENTRADA
                for (int i=0; i<4; i++) {
                    printf("Peso do estudante %d: ", i+1);
                    scanf("%f", &pesosDosEstudantes[i]);
                }

                //APP
                status= rateioPesosDiferentes(valorTotal, parcelasDosEstudantes, pesosDosEstudantes);
                break;

            default: 
                printf("Tipo de divisao invalida.");
                status= -1;
                break;
        }
    }
    else status= -1;
    
    //IMPRESSÃO
    if (status == 0) {
        for (int i=0; i<4; i++) {
            printf("Estudante %d paga: R$%.2f.\n", i+1, parcelasDosEstudantes[i]);
        }
    }
    
    return 0;
}