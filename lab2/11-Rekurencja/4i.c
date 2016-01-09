//4. Korzystając z twierdzenia Euklidesa, napisać program obliczający
//iteracyjnie największy wspólny dzielnik z liczb podanych na wejściu.

#include <stdio.h>

int nwd(int a,int b)
{
  int c;                    // Tworzymy zmienną c o typie int
  while(b != 0)             // Tworzymy pętlę działającą gdy b ≠ 0
  {
    c = a % b;              // Zmienna c przyjmuje wartość a modulo b
    a = b;                // Przypisujemy b do a
    b = c;                // Przypisujemy c do b
  }
  return a;                 // Zwracamy a, czyli żądane NWD(a,b)
}
int main(){
  int a, b;


  printf("podaj 2 liczby\n");
  scanf("%d %d", &a, &b);

  printf("nwd(%d,%d) = %d\n", a, b, nwd(a,b));
}
