/*5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy,
 a następnie wypisze zawartość tej tablicy od początku i od końca.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
   int a,b,c,d,e,f;
   int tablica[6] = {a, b, c, d, e, f};

	printf ("Podaj 6 liczb calkowitych: ");
	scanf ("%d" "%d" "%d" "%d" "%d" "%d", &a, &b, &c, &d, &e, &f);
	printf ("%d | %d\n%d | %d\n%d | %d\n", a,b,c,d,e,f);

printf("\n%d %d %d %d %d %d\n", a,b,c,d,e,f);
printf ("\n%d %d %d %d %d %d\n", f,e,d,c,b,a);
}
