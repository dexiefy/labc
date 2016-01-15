#include <stdio.h>

int  main() {
  
  int i;
  
  printf("Podaj liczbe ktorej silnie chcesz obliczyc!\n");
  scanf("%d", &i);
  
  if (i < 0){
    printf("Podaj liczbe nieujemna!.\n");
    return 0;
  }
  
  else
  {
    printf("Silnia liczby %d to %d\n", i, factorial(i));
  }
}

int factorial(int i) {
  
  if(i <= 1) {
    return 1;
  }
  return i * factorial(i - 1);
}
