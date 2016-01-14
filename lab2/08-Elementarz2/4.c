//4. Zamiast komentarza /** ... */ i kropek ... poniżej wpisz kod, tak aby powstał
//program zliczający znaki odstępu, tabulacji i nowego wiersza tekstu wczytanego z stdin.
//#include <stdio.h>
//int main() {
//   /** deklaracje zmiennych lokalnych */
//   nb = 0;  /* liczba znaków odstępu */
//   nt = 0;  /* liczba znaków tabulacji */
//   nl = 0;  /* liczba znaków nowego wiersza */
//   while ((c=getchar()) != EOF) {
//      /** zliczaj białe znaki */
//   }
//   printf("liczba znaków odstępu = %d,
//      tabulacji = %d, nowego wiersza = %d\n", ... );
//   return 0;
//}

#include <stdio.h>

int main () {
  int c, nb=0, nt=0, nl=0;

  while ((c=getchar()) != EOF) {
    if (c == ' ') {
      ++nb;
  }
      
    else if (c == '\t') {
      ++nt;
  }
      
    else if (c == '\n') {
      ++nl;}
  }
  printf("liczba znaków odstępu = %d, tabulacji = %d, nowego wiersza = %d\n", nb, nt, nl);
}
