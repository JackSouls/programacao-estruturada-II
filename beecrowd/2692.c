#include <stdio.h>
#include <string.h>

typedef struct{
    char texto[50];
} Bagunca;
 
int main() {
    int n = 0;
    int m = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    Bagunca bagunca[m];

    char nm[n][2];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            scanf("%c", &nm[i][j]);
        }
    }

   for(int i = 0; i < m; i++){
    fgets(bagunca[i].texto, 50, stdin);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
   }

   for(int i = 0; i < m; i++){
        for(int j = 0; j < strlen(bagunca[i].texto); j++){
            for(int k = 0; k < n; k++){
                if(bagunca[i].texto[j] == nm[k][0]){
                    bagunca[i].texto[j] = nm[k][1];
                } else if(bagunca[i].texto[j] == nm[k][1]) {
                    bagunca[i].texto[j] = nm[k][0];
                }
            }
        }
   }
    return 0;
}
    return 0;
}
