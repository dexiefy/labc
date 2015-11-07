/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>

int main() {

   int a, b;
   char *msg = "wieksza liczba to: %d\n";


      printf("Podaj pierwsza liczbe: ");
      scanf("%d", &a);
      printf("Podaj druga liczbe: ");
      scanf("%d", &b);

if (a > b)
  printf(msg, a);
else {
  printf(msg, b);
}
}
