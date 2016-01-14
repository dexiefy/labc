//4. Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej.

#include <stdio.h>

int main()
{
  int c, n, fact = 1;

  printf("Podaj liczbe do obliczenia silni\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
  fact = fact * c;

  printf("Silnia liczby %d = %d\n", n, fact);
}
