#include "stdio.h"

int main() {
    double termoSomatorio, resultadoSomatorio=0.0;
    for (int n=0; n<=25; n++) {
        //Reseta
        termoSomatorio=1;
        //Calcula
        for (int i=0; i<n; i++){
            termoSomatorio *= 9;
        }
        //Formata
        printf("%.0lf", termoSomatorio);
        if (n < 25) printf(" + ");
        //Calcula
        resultadoSomatorio += termoSomatorio; 
    }
    //Formata
    printf(" = %.0lf", resultadoSomatorio);
}