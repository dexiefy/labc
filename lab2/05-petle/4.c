#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, a, suma = 0;
      printf("Podaj liczbe: ");
      scanf("%d", &n);

if ( n < 1) {
  printf("Podaj liczbe wieksza od 0!\n");
  exit (1);
}
else;
  for ( a = 1 ; a <= n; ++a){
    suma += a;
  }
printf("Suma liczb = %d\n", suma);
}
