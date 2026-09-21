/*Implemente a função `void divisao_inteira(int dividendo, int divisor, int *quociente, int
*resto)`, que calcula o quociente e o resto da divisão inteira e escreve os resultados nos
endereços apontados por `quociente` e `resto`.
(b) Escreva um `main` que declare `int q, r;`, chame `divisao_inteira(17, 5, &q;, &r;)` e
imprima os dois resultados.
(c) Adicione à função `divisao_inteira` uma verificação: se `divisor` for igual a zero, a função
deve imprimir uma mensagem de erro e atribuir `0` a `*quociente` e `*resto`, sem realizar a
divisão. Explique por que essa verificação é necessária.
(d) Compare essa abordagem (ponteiros como parâmetros de saída) com a alternativa de criar
duas funções separadas, uma para o quociente e outra para o resto. Quais as vantagens de
usar ponteiros aqui?*/

#include <stdio.h>

void divisao_inteira(int dividendo, int divisor, int *quociente, int *resto){
    if (divisor == 0){
        printf("Divisor igual a 0\n");
        *quociente = 0;
        *resto = 0;
    } else {
        *quociente = dividendo/divisor;
        *resto = dividendo%divisor;
    }
}

void main(){
    int q = 0;
    int r = 0;

    divisao_inteira(17, 5, &q, &r);

    printf("Quociente %d\n", q);
    printf("Resto %d\n", r);
}
