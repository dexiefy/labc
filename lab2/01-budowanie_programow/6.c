/* Program wylicza pierwiastek kwadratowy z liczby podanej przez uzytkownika */

#include <stdio.h>
#include <math.h>

int main() {

  float a;

      printf("Podaj liczbe do spierwiastkowania: ");
      scanf("%f", &a);

  if ( a < 0 ) {
      printf("Sprobuj jeszcze raz, podajac liczbe dodatnia\n");
}
  else {
      printf("Pierwiastek kwadratowy podanej liczby to= %.5f\n", sqrt(a));
}
}
