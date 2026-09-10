#include <stdio.h>

int main(){
    int numeroLinhas = 0;
    int numero = 0;
    int soma = 0;
    scanf("%d", &numeroLinhas);

    char linhas[numeroLinhas][14];

    for (int i = 0; i < numeroLinhas; i++)
    {
        scanf(" %[^\n]", &linhas[i]);
    }

    for (int i = 0; i < numeroLinhas; i++)
    {
        //Ab23s249ttu21
        for (int j = 0; j < 14; j++)
        {
            if(linhas[i][j] >= 48 && linhas[i][j] <= 57){
                numero = numero * 10 + (linhas[i][j] - '0');
            } else {
                soma += numero;
                numero = 0;
            }

            if(j == 13 && (linhas[i][j] >= 48 && linhas[i][j] <= 57)){
                soma += numero; 
            }
        }
            printf("%d\n", soma);
            soma = 0;
        }
    return 0;
    }
