//3. Trójkąt pitagorejski to trójkąt prostokątny, w którym długość każdego boku
//jest liczbą całkowitą.
//Napisz program wypisujący wszystkie trójkąty pitagorejskie,
//których obwód nie przekracza 1000.

#include <stdio.h>

int main() {
  int a, b, c;

  for (a = 1; a <= 500; a++) {
    for (b = 1; b <= 500; b++) {
      for (c = 1; c <= 500; c++) {
        if (a * a + b * b == c * c) {
          if (a + b + c <= 1000 && a<b && b<c) {
            int obwod = a + b + c;
            printf("A=%d \t B=%d \t C=%d \t Obwod=%d \n", a, b, c, obwod);
          }
        }
      }
    }
  }
}
