#include <stdio.h>


int main() {
  int M, suma = 0, i = 1;
{
  printf ( "Podaj liczbe M:" );
  scanf ( "%d", &M );
}

  while ( suma < M ) {
     suma = suma+i;
     i = i+1;
}

  printf("Szukane n to:%d\n", i);

}
