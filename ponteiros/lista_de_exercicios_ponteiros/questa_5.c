/*Implemente a função `int soma_segura(int *a, int *b, int *resultado)`, que soma os valores
apontados por `a` e `b` e escreve o resultado em `*resultado`, retornando `1` em caso de
sucesso. Se `a`, `b` ou `resultado` for `NULL`, a função não deve realizar a soma e deve
retornar `0`.*/

#include <stdio.h>

int soma_segura(int *a, int *b, int *resultado)
{
    if (a == NULL || b == NULL || resultado == NULL)
    {
        return 0;
    }
    else
    {
        *resultado = *a + *b;
        return 1;
    }
}

void main()
{
    int x = 5;
    int y = 10;
    int *resultado = NULL;

    if (soma_segura(&x, &y, resultado))
    {
        printf("Resultado %d\n", resultado);
    } else {
        printf("Endereço de soma inválido(s)");
    }
}
