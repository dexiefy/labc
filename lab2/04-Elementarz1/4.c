//4. Napisać program obliczający silnię z podanej, niezbyt dużej,
// liczby naturalnej.


#include <math.h>
#include <stdio.h>

int main() {

  int c, n, fact=1;

  printf("Podaj liczbe: ");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
  fact = fact * c;

  printf("Silnia liczby %d = %d\n", n, fact);
}
