#include <stdio.h>
int main () {
    int a, b;
    for(a=1; a<=3; a++)
      for (b=1; b<=5 && b>=1; b++)
      { 
        printf("*");
      }
        printf("\n");


      return 0;
}