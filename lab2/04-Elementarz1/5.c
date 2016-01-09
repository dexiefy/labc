/*5. Student G. Apa dostał od kolegi na kartce kod programu zliczającego
 znaki odstępu, tabulacji i nowego wiersza. Niestety jego młodszy brat
 pociął kartkę na kawałki zawierające po jednym wierszu kodu,
 a następnie kawałki te wymieszał. Uporządkuj te kawałki,
  tak aby powstał działający program.

 zlicz znaki odstępu, tabulacji
{git a
}
#include &lt;stdio.h>
i nowego wiersza */

#include <stdio.h>

int main (){

  int c;
  int nb, nt, nl;

  nb = 0;
  nt = 0;
  nl = 0;

  while ((c=getchar()) != EOF){
    if (c == ' ')
    ++nb;
    else if (c == '\n')
    ++nl;
    else if (c == '\t');
    ++nt;
  }

  printf("%d %d %d\n", nb, nt, nl);


  return 0;
}
