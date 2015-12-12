//2. Napisać funkcję rekurencyjną C(n,k) obliczającą współczynnik Newtona n po k,
// czyli liczbę podzbiorów k-elementowych zbioru n-elementowego.

#include <stdio.h>


int C(int n, int k){
  if (k == 0 || k == n) {
    return 1;
  } else {
return C(n - 1, k - 1) + C(n - 1, k);

  }

}
int main(){
printf("C(%d, %d) = %d\n", 4, 2, C(4, 2));
printf("C(%d, %d) = %d\n", 9, 4, C(9, 4));
printf("C(%d, %d) = %d\n", 49, 6, C(49, 6));
printf("C(%d, %d) = %d\n", 45, 5, C(45, 5));

}
