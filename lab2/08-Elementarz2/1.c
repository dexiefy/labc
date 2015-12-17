//1. W poniższym programie, który kopiując wejście na wyjście zastępuje kazdy znak tabulacji przez \t
//oraz każdy znak \ przez dwa takie znaki, zostały przestawione wiersze.
//Uporzadkuj je, tak aby powstał działający program.
//
//#include <stdio.h>
//while ((c=getchar())!=EOF)
//}
//printf("\\t");
//else if (c=='\\')
//printf("\\\\");
//if (c=='\t')
//else
//int c;
//putchar(c);
//int main() {
//return 0;




#include <stdio.h>


int main() {
  int M, suma = 0, i = 0;
{
  printf ( "Podaj liczbe M:" );
  scanf ( "%d", &M );
}

  while ( suma < M ) {
     suma = suma + i;
     i++;
}
  printf("Szukane n to:%d\n", i);
}
