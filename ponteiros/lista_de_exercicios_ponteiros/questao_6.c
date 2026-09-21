/*Reescreva `criar_valor` de forma correta, usando passagem por referência: a função
deve receber `int n` e um ponteiro `int *resultado` (parâmetro de saída) e escrever o quadrado
de `n` no endereço apontado, sem retornar ponteiro nenhum.
Ajuste o `main` para usar a nova versão de `criar_valor`, declarando uma variável local
para receber o resultado.*/

#include <stdio.h>

void criar_valor(int n, int *resultado)
{
    *resultado = n * n;
}

int main(void)
{
    int p = 0;
    criar_valor(5, &p);
    printf("%d\n", p);
    return 0;
}
