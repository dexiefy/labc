#include <stdio.h>

int main() {

int c;

  while ((c=getchar())!=EOF){
    putchar(c);
}

  if (c=='\t'){
    printf("\\t");
}
  else if (c=='\\'){
    printf("\\\\");
}
  else{
  return 0;
}
}
