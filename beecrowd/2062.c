/*Mariazinha criou um exercício para as suas irmãs Paula e Marta:
 ela distribui um texto e pede que ambas corrijam este texto, 
 sabendo que apenas as palavras OBI e URI podem estar escritas de forma errada, 
 e o erro pode estar apenas na última letra.
 Sua tarefa aqui é automatizar este processo,
ou seja, criar um programa que faça a correção dos textos distribuídos pela Mariazinha para que ela possa conferir as correções
de suas irmãs sem muito trabalho.
Note que se "OB" ou "UR" forem o início ou parte de uma palavra maior, como por exemplo "OBOS" ou "URAT"), 
estas palavras não devem ser alteradas.
 */
#include <stdio.h>
#include <string.h>

 int main(){
    int quantidadePalavras;
    scanf("%d", &quantidadePalavras);

    char palavras[quantidadePalavras][20];

    for (int i = 0; i < quantidadePalavras; i++)
    {
        scanf("%s", palavras[i]);
    }

    for (int i = 0; i < quantidadePalavras; i++)
    {
        if (strlen(palavras[i]) == 3)
        {
            if(palavras[i][0] == 'O' && palavras[i][1] == 'B')
                palavras[i][2] = 'I';
            if(palavras[i][0] == 'U' && palavras[i][1] == 'R')
                palavras[i][2] = 'I';
        }

        if (i == quantidadePalavras - 1)
        {
            printf("%s\n", palavras[i]);
        } else {
            printf("%s ", palavras[i]);
        }
    }   
    return 0;
 }
