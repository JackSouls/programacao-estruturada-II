#include <stdio.h>

int main(){
    int valorLinhas = 0;
    
    scanf("%d", &valorLinhas);

    float casos[valorLinhas][4];
    int pesos[4] = {2, 3, 5, 10};

    for (int i = 0; i < valorLinhas; i++)
    {
         casos[i][3] = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &casos[i][j]);
            casos[i][3] += casos[i][j] * pesos[j];
        }
    }

    for (int i = 0; i < valorLinhas; i++)
    {
        casos[i][3] = casos[i][3] / pesos[3];
        printf("%.1f\n", casos[i][3]);
    }
    return 0;
}
