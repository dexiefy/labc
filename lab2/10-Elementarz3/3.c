/*3. Trójkąt pitagorejski to trójkąt prostokątny, w którym długość każdego boku jest liczbą całkowitą.
Napisz program wypisujący wszystkie trójkąty pitagorejskie, których obwód nie przekracza 1000.*/
#include <stdio.h>

int main() {

  int a = 3;
  int b = 4;
  int c = 5;
  int obwod = a  + b + c;

  printf("Trojkaty pitagorejskie o obwodzie mniejszym od 1000 to:\n");

  for (int i=1; i < obwod; i++){
    if (a^2+b^2==c^2){
      printf("Trojkat o bokach %d, %d, %d oraz obwodzie %d\n", a, b, c, obwod);

      /*while (a+b+c<1000){
      obwod= a+b+c;
      a++;
      b++;
      c++;
    }
  }*/

}
