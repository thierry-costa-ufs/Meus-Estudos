#include <stdio.h>
#include <time.h>

int main(){
    int hora, min;

    scanf("%dh%dmin", &hora, &min);
    int segundos = hora * 3600 + min * 60;
    printf("s = %d\n",segundos);
}