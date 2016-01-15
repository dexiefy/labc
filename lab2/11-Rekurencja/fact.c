#include <stdio.h>

int  main() {
  
  int i;
  
  printf("Podaj liczbe ktorej silnie chcesz obliczyc!\n");
  scanf("%d", &i);
  
  printf("Silnia liczby %d to %d\n", i, factorial(i));
}

int factorial(int i) {
  
  if(i <= 1) {
    return 1;
  }
  return i * factorial(i - 1);
}
