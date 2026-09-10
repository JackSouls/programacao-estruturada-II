#include <stdio.h>
 
int main() {
    int numeroValores = 0;

    scanf("%d", &numeroValores);

    int valores[numeroValores];

    for (int i = 0; i < numeroValores; i++)
    {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < numeroValores; i++)
    {
        if(valores[i] != 0){
            if(valores[i]%2 == 0){
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            if(valores[i] > 0){
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        } else {
            printf("NULL\n");
        }
    }

    return 0;
}
