/*Faça um programa que leia um vetor X[10].
 Substitua a seguir, todos os valores nulos e negativos do vetor X por 1.
  Em seguida mostre o vetor X.*/

  #include <stdio.h>

  int main(){
    int x[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
        if(x[i] <= 0){
            x[i] = 1;
        }

        printf("X[%d] = %d\n", i, x[i]);
    }
    return 0;
  }
