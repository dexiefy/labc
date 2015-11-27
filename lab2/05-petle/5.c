/*5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy,
 a następnie wypisze zawartość tej tablicy od początku i od końca.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
      int tablica[6];

	printf ("Podaj 6 liczb calkowitych: ");
	scanf ("%d" "%d" "%d" "%d" "%d" "%d", &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5], &tablica[6]);
	printf ("%d | %d\n%d | %d\n%d | %d\n", tablica[1], tablica[2], tablica[3], tablica[4], tablica[5], tablica[6]);

printf("\n%d %d %d %d %d %d\n", tablica[1], tablica[2], tablica[3], tablica[4], tablica[5], tablica[6]);
printf ("\n%d %d %d %d %d %d\n", tablica[6], tablica[5], tablica[4], tablica[3], tablica [2], tablica[1]);
}
