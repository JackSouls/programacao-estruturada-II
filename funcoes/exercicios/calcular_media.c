#include "conversao.h"
#include <stdio.h>

double calcular_media(const int v[], int tam){
    double s = 0;
    for(int i; i < tam; i++){
        double s = s + v[i];
    }
    return s / tam;
}
