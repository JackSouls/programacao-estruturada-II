#include <stdio.h>
#include <string.h>

typedef sctruct{
    char texto[50];
} Bagunca;
 
int main() {
    int n;
    int m;

    Bagunça bagunca[m];
    

    scanf("%d", &n);
    scanf("%d", &m);


    int nm [n][2];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            scanf("%c", &nm[i][j]);
        }
    }

   for(int i = 0; i < m; i++){
    fgets(bagunca[i].texto, 50, stdin);
   }

   for(int i = 0; i < m; i++){
        for(int j = 0; j < strlen(bagunca[i].texto); j++){
            for(int k = 0; k < n; k++){
                
            }
        }
   }

 
    return 0;
}
