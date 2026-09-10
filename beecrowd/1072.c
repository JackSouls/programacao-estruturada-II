#include <stdio.h>
 
int main() {
    int numeroValores = 0;
    int dentro = 0;
    int fora = 0;

    scanf("%d", &numeroValores);

    int valores[numeroValores];

    for (int i = 0; i < numeroValores; i++)
    {
        scanf("%d", &valores[i]);
        if(valores[i] >= 10 && valores[i] <=20){
            dentro++;
        } else {
            fora++;
        }
    }

    printf("%d in\n", dentro);
    printf("%d out\n", fora);
    return 0;
}
