#include <stdio.h>



int  main() {
     
int i;
    
 printf("Podaj liczbe ktorej silnie chcesz obliczyc!\n");
    
 scanf("%d", &i);
    
 
   printf("Factorial of %d is %d\n", i, factorial(i));
  
 return 0;
}


int factorial(int i) {

 
  if(i <= 1) {
   
   return 1;
   }
 
  return i * factorial(i - 1);
}
