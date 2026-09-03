#include <stdio.h>
#include <string.h>

 typedef struct{
     char texto[50];
     int chave;
 } Cifra;
 
 
int main() {
    int n;
    scanf("%d", &n);
    
    Cifra cifra[n];
    
    for(int i = 0; i< n; i++){
        scanf("%s", &cifra[i].texto);
        scanf("%d", &cifra[i].chave);
    };
    
    for(int i = 0; i<n; i++){
        for(int o = 0; o < strlen(cifra[i].texto); o++){
            cifra[i].texto[o] = cifra[i].texto[o] - cifra[i].chave;
            if(cifra[i].texto[o] < 65){
                int passou = 65 - cifra[i].texto[o];
                cifra[i].texto[o] = 90 - passou + 1; 
            }
        }
        printf("%s\n", cifra[i].texto);
    }
    
    return 0;
}
