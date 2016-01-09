//2. Zamiast komentarzy /* ... */ w programie poniżej wpisz kod tak, aby powstał program,
//który sprawdza czy podana liczba całkowita jest pierwsza.

//#include <stdio.h>
//int main() {
/* deklaracje zmiennych */
//  printf("Podaj liczbe calkowita: ");
/* wczytaj tę liczbę do zmiennej n */
/* sprawdź czy n jest liczbą pierwszą */
//printf("Podana liczba '%d' jest %s\n",
//    n, jest_pierwsza ? "pierwsza" : "złożona");
//  return 0;
//}



#include <stdio.h>

int main() {

  int n, i;

  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);

  for(i = 2; i < n; i++){
    if(n%i == 0){

      printf("%d nie jest pierwsza\n", n);

      return 0;
    }
  }
  if( n==i ){

    printf("Podana liczba %d jest pierwsza\n", n);
  }
}
