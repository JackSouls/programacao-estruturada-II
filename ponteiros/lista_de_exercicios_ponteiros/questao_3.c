#include <stdio.h>
void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int x = 10;
    int y = 5;

    printf("X: %d\n", x);
    printf("Y: %d\n", y);

    trocar(&x, &y);

    printf("Depois da troca X: %d\n", x);
    printf("Depois da troca Y: %d\n", y);
}
