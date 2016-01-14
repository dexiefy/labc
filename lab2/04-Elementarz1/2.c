//2. W miejsce kropek „...” wpisz kod, tak aby powstały działające programy.
//
///* Program ten wypisuje liczby z tablicy tabela[]
//   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
//#include <stdio.h>
//int main() {
//   int tabela[] = {1, 2, 4, 6, 12};
//   for (...)
//      ...
//   return 0;
//}

#include <stdio.h>
#define size 5


int main()
{
  int tab[size] = {1, 2, 4, 6, 12};
  int i;
  
  for (i=size-1; i>=0; i--) {
    printf ("Element numer %d = %d\n", i, tab[i]);
  }
}
