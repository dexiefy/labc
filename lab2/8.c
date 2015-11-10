#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {

int a, b, c, suma, iloczyn;
  printf("Wprowadz 3 liczby: ");
  scanf("%d %d %d", &a, &b, &c);

   suma = a + b + c;
   iloczyn = a * b * c;

  printf("Suma wynosi:%d\n" "Iloczyn wynosi: %d\n", suma, iloczyn);

   if (a<b && a<c)
	printf("Najmniejsza liczba to: %d\n", a);

   else if (b<a && b<c)
	printf("Najmniejsza liczba to: %d\n", b);

   else
	printf("najmniejsza liczba to: %d\n", c);
}
