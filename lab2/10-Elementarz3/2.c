#include <stdio.h>
#include <math.h>

int main(){

int i;

  printf("Liczba  | Pierwiastek\n");

  for (i=1; i<=20; i++)
    printf("%d      | %f         \n", i, sqrt(i));
}
