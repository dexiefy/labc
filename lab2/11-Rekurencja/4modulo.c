//Algorytm wykorzystujący funkcję modulo do obliczenia NWD

// Funkcja NWD przyjmująca 2 argumenty: a i b typu int – czyli liczby,
// których NWD chcemy poznać. Funkcja zwraca wartość typu int – czyli żądane NWD(a,b)

#include <stdio.h>

int nwd(int a,int b)
{
  int c;
  while(b != 0)
  {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}
int main(){
  int a, b;


  printf("podaj 2 liczby\n");
  scanf("%d %d", &a, &b);

  printf("nwd(%d,%d) = %d\n", a, b, nwd(a,b));
}
