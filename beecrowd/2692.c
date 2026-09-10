#include <stdio.h>
#include <string.h>

int main(){
    int numLetras = 0;
    int numFrases = 0;

    scanf(" %d %d", &numLetras, &numFrases);

    char trocas[numLetras][2];
    char frases[numFrases][100];

    for (int i = 0; i < numLetras; i++)
    {
        scanf(" %c %c", &trocas[i][0], &trocas[i][1]);
    }
    
    for (int i = 0; i < numFrases; i++)
    {
        scanf(" %[^\n]", frases[i]);
    }

    for (int i = 0; i < numFrases; i++)
    {
        for (int j = 0; j < numLetras; j++)
        {
            for (int k = 0; k < strlen(frases[i]); k++)
            {
                if(frases[i][k] == trocas[j][0]){
                    frases[i][k] = trocas[j][1];
                } else if(frases[i][k] == trocas[j][1]){
                    frases[i][k] = trocas[j][0];
                }
            }
        }
    }

    for (int i = 0; i < numFrases; i++)
    {
        printf("%s\n", frases[i]);
    }
    return 0;
}
