
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

  float  a, s, o;
      printf("Podaj liczbe: ");
      scanf("%f", &a);
      s = sqrt(a);
      
   if (a == 0) {
	printf("podaj liczbe dodatnia!\n");
	exit(1);
}
   else if (0 > a) {
      printf("Liczba odwrotna do liczby %.0f to: -1/%.0f\n", a,- a);
}
   else {
      printf("Liczba odwrotna do liczby %.0f to 1/%.0f. A jej pierwiastek kwardratowy wynosi %.5f\n", a, a, s);
      
}
}
