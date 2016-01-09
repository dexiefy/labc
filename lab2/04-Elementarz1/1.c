/*1. Napisz program obliczający wartość każdego z poniższych wyrażeń:

n1=5+3*8/2-3
n2=2%2+2*2-2/2
n3=2*4*(5+9/2)
*/

#include <stdio.h>

int main() {

  int n1 = 5+3*8/2-3;
  int n2 = 2%2+2*2-2/2;
  int n3 = 2*4*(5+9/2);

  printf("5+3*8/2-3 = %d\n", n1);
  printf("2mod2+2*2-2/2 = %d\n", n2);
  printf("2*4*(5+9/2) = %d\n", n3);

}
