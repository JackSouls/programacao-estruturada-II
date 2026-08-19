#include <stdio.h>

void testeRecursivo(int n){
    printf("\nNum = %d", n);
    if(n != 10000){
        testeRecursivo(n +1);
    }
}

void main(){
    testeRecursivo(1);
} 
