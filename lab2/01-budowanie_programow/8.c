#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
   int a, b, c, max, min, suma, iloczyn;


   printf ( "Wprowadz 3 liczby: ");
   scanf ( "%d %d %d", &a, &b, &c);

   min = a;
   max = a;
   suma = a + b + c;
   iloczyn = a * b * c;


	if ( b < a){
	min = b;
}
	else max = b;

	if (c > max){
        max = c; 
}
	if (c < min){
        min = c;
}


   printf( " Suma: %d \n Iloczyn: %d\n Najmniejsza liczba to: %d\n Najwieksza liczba to: %d\n", suma, iloczyn, min, max);
}
