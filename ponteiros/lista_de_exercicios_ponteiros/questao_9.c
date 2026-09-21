#include <stdio.h>

void main(){
    //Trecho A (incorreto):
    /*
    int *p;
    *p = 10;
    printf("%d\n", *p);
    */

   //Trecho A (corrigido):
   int p;
   p = 10;
   printf("%d\n", p);

   //Trecho B (incorreto):
   /*
   int a = 5;
    int *p = &a;
    int *q = a;
    printf("%d\n", *q);
   */

  //Trecho B (corrigido):
  int a = 5;
  int *pointer = &a;
  int q = *pointer;
  printf("%d\n", q);
  
}
