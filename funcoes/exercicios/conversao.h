#ifndef CONVERSAO_H
#define CONVERSAO_H
#define FATOR_KM_MILHA 0.621371

double celsius_para_fahrenheit(double c);
double km_para_milhas (double km);
double cacular_media(const int v[], int tam);
int buscar_indice(const int v[], int tam, int alvo);
int contar_multiplos(const int v[], int tam, int divisor);
void rotacionar_direita(int v[], int tam);

#endif

//gcc main.c conversao.c -Wall -o conversor.exe
