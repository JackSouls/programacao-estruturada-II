#include <stdio.h>

void troca(int *a, int *b){
    int v1 = *a;
    int v2 = *b;
    *a = v2;
    *b = v1;
}

void main(){
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    troca(&x, &y);

    printf("X = %d || Y = %d", x, y);
}
