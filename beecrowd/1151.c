#include <stdio.h>

int main(){
    int tamFibo = 0;

    scanf("%d", &tamFibo);

    int fibo[tamFibo];

    for (int i = 0; i < tamFibo; i++)
    {
        if(i == 0){
            fibo[i] = 0;
        } else if(i == 1){
            fibo[i] = 1;
        } else {
            fibo[i] = fibo[i-1] + fibo[i - 2];
        }
    }

    for (int i = 0; i < tamFibo; i++)
    {
        if(i == tamFibo-1){
            printf("%d\n", fibo[i]);
        } else {
            printf("%d ", fibo[i]);
        }
    }
    return 0;
}
