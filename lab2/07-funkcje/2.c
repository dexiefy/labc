// 2. Napisz funkcję, która oblicza wartość silni z liczby naturalnej.
// Wykorzystaj ją w programie wypisującym na wyjście silnię
// 10 pierwszych liczb naturalnych.

// n!= 1 * 2 * ... * (n-1) * n
// 3! = 1 * 2 * 3 = 6
// 0! = 1  -- definicja
// 1! = 1
// factorial = silnia


#include <stdio.h>

int factorial(int n){
  int fact = 1;

  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}
int main(){
  for (int i = 0; i <= 10; i++) {
    printf("factorial(%d) = %d\n", i, factorial(i));
  }


}
