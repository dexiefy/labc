#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, sum = 0;
  
  for ( i=1; i <= 1000000 ; i++ ){
    sum = 0;
    
    for(j = 1; j < i; j++){
      if( i%j == 0){
        
        sum += j;
      }
    }
    if( sum == i){
      
      printf("%d is Perfect Number\n", i);
    }
  }
}
