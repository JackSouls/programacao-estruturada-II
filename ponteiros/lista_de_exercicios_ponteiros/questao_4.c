#include <stdio.h>

int acumular(int total, int valor) {
return total = total + valor;
}

void resetar(int *total){
    *total = 0;
}

int main(void) {
int soma = 0;

soma = acumular(soma, 10);
printf("Apos 1a chamada: %d\n", soma);

soma = acumular(soma, 5);
printf("Apos 2a chamada: %d\n", soma);

soma = acumular(soma, -3);
printf("Apos 3a chamada: %d\n", soma);

resetar(&soma);
printf("Resetado: %d", soma);

return 0;
}
