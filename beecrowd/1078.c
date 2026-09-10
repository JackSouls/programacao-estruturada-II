#include <stdio.h>

int main(){
    int x = 0;

    scanf("%d", &x);  

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, x, i*x);
    }
    return 0;
}
