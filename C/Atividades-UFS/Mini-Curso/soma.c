#include <stdio.h>

int soma(int n){
    if (n == 0) {
        return 0;
    }
    else {
        return (n*n) + soma(n-1);
    }
}

int main(){
    printf("%d\n", soma(15));
    return 0;
}