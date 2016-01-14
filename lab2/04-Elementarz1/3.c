//3. Napisać program, który robi to co poprzedni program,
//ale tym razem zamiast pętli „for” należy użyć pętli „while”.

#include <stdio.h>
#define size 5

int main()
{
  int tab[size] = {1, 2, 4, 6, 12};
  int i=5;

  while (i<=size && i>0) {
    i--;
    printf ("Element numer %d = %d\n", i, tab[i]);
  }
}
