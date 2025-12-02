#include "stdio.h"

int main() {
    double notaCriterio, somaCriterios;
    for (int i=1; i<=75; i++) {
        somaCriterios=0;
        for (int j=1; j<=10; j++) {
            scanf("%lf", &notaCriterio);
            somaCriterios += notaCriterio;
        }
        printf("Estudante %d: %.2lf\n", i, somaCriterios);
    }
}
