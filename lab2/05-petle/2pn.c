#include <stdio.h>

void print_pattern(int ile_gwiazdek)
{
  for (int i = 0; i < ile_gwiazdek - 1; i++) {
    printf("* ");
  }
  printf("\n");
  for (int i = 0; i < ile_gwiazdek; i++) {
    printf(" *");
  }
  printf("\n");
}

int main()
{
  int n = 4;

  for (int i = 0; i < n; i++) {
    print_pattern(8);


  }
}
