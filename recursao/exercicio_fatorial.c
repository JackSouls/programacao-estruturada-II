#include <stdio.h>

int fatorial(int n){
    int r;
    printf("Nº: %d\n", n);
    if(n == 1) return 1;
    r = n * fatorial(n - 1);
    printf("Resultado: %d\n", r);
    return r;
}

void main (){
    fatorial(6);
}
