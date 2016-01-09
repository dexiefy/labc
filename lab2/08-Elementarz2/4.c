//4. Zamiast komentarza /** ... */ i kropek ... poniżej wpisz kod,
//tak aby powstał program zliczający znaki odstępu, tabulacji i nowego wiersza tekstu wczytanego z stdin.

#include <stdio.h>


int main() {

  /** deklaracje zmiennych lokalnych */
  nb = 0;  /* liczba znaków odstępu */
  nt = 0;  /* liczba znaków tabulacji */
  nl = 0;  /* liczba znaków nowego wiersza */

  while ((c=getchar()) != EOF) {

    if (c == '\n')
    ++nl;
    else if (c == '\t')
    ++nt;
    else if (c == ' ')
    ++nb;
  }

  printf("liczba znaków odstępu = %d, tabulacji = %d, nowego wiersza = %d\n", nb, nt, nl);

  return 0;
}
