/*1. W poniższym programie, który kopiując wejście na wyjście zastępuje kazdy znak 
tabulacji przez \t oraz każdy znak \ przez dwa takie znaki, zostały przestawione wiersze. 
Uporzadkuj je, tak aby powstał działający program.

#include <stdio.h>
while ((c=getchar())!=EOF)
}
printf("\\t");
else if (c=='\\')
printf("\\\\");
if (c=='\t')
else
int c;
putchar(c);
int main() {
return 0;
*/







#include <stdio.h>

int main() {

int c;

  while ((c=getchar())!=EOF){
    putchar(c);
}

  if (c=='\t'){
    printf("\\t");
}
  else if (c=='\\'){
    printf("\\\\");
}
  else{
  return 0;
}
}
