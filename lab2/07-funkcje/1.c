//1. Zdefiniuj funkcję przeciwprostokatna obliczającą długość przeciwprostokątnej
//trójkąta prostokątnego z podanych długości przyprostokątnych.
//Wykorzystaj tę funkcję w programie do określania długości przeciwprostokątnej każdego
//z następujących trójkątów:
//
//trójkąt  a      b
//--------------------
//1        3.0    4.0
//2        5.0    5.0
//3        1.0    6.0
//
//Funkcja powinna pobierać dwa argumenty typu double i zwracać długość
//przeciwprostokątnej też jako double.
#include <stdio.h>
#include <math.h>


double przeciwprostokatna(double a, double b){
  return sqrt(a*a + b*b);
}
int main() {
  double a[] = { 3.0, 5.0, 1.0};
  double b[] = { 4.0, 5.0, 6.0};

for (int i = 0; i < 3; i++) {
  printf("a = %f b = %f przeciwprostokatna = %.2f\n",
   a[i], b[i],   przeciwprostokatna(a[i], b[i]));
}
}
