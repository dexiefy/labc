/* Napisz program, który wczyta liczbę rzeczywistą i wypisze jej odwrotność oraz jej pierwiastek kwadratowy.
Program nie powinien obliczać odwrotności liczby 0 oraz pierwiastka z liczby ujemnej.
W takiej sytuacji zamiast obliczeń program powinien wypisać odpowiedni komunikat. */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

  float  a;
      printf("Podaj liczbe: ");
      scanf("%f", &a);

   if (a == 0) {
        printf("Podaj liczbe dodatnia!\n");
        return 0;
}
   else if (a < 0) {
      printf("Liczb odwrotna do liczby %.0f to: -1/%.0f.\n", a, -a);
}
   else {
      printf("Liczba odwrotna do liczby %.0f to 1/%.0f.\nA jej pierwiastek kwardratowy wynosi %.5f.\n", a, a, sqrt(a));
}
}
