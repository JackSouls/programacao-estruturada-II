#include<stdio.h>
#include"funcoes.h"

int main() {
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);
    int result = soma(n1 , n2);
    printf("A soma é : %d\n", result);

    int num = 10;
    printf("\nValor : %d", num);
    num = fazAlgo(num);
    printf("\nValor : %d", num);
    
}
