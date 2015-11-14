
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

  float  a, s, o;
      printf("Podaj liczbe: ");
      scanf("%f", &a);
      s = sqrt(a);
      o = 1/a;

   if (a=0) {
	printf("podaj liczbe dodatnia!\n");
	exit(1);
}
   else if (a<0) {
        printf("Liczba odwrotna do liczby %.0f to: -%.0f\n", a, o);
}
   else {
      printf("blablablabla odwrotna do liczby %.0f to: %.0f\n", a, o);
      printf("Pierwiastek kwadratowy podanej liczby to: %.5f\n", s);
}
}
