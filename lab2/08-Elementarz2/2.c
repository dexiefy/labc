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
