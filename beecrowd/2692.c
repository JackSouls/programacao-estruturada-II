#include <stdio.h>
#include <string.h>

 
int main() {
    int numLetras = 0;
    int numFrases = 0;

    scanf(" %d %d", &numFrases, &numLetras);

    char trocas[numLetras][2];
    char frase[numFrases][100];

    for (int i = 0; i < numLetras; i++)
    {
        scanf(" %c %c", &trocas[i][0], trocas[i][1]);
    }

    for (int i = 0; i < numFrases; i++)
    {
        scanf(" %[^\n]", &frase[i]);
    }


    
    
    
    

}
