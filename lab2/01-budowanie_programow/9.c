#include<stdio.h>
#include<math.h>

main () {

   double min, max, step;

     printf("Podaj wartosc poczatkowa: ");
	scanf("%lf", &min);
     printf("Podaj wartosc koncowa: ");
	scanf("%lf", &max);
     printf("Podaj krok: ");
	scanf("%lf", &step);

     printf("Liczba | Pierwiastek\n");

	while ( min <= max) {
     printf("|%.4lf | %.4lf|\n", min, sqrt(min));

     min = min + step;
}

}
