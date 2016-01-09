/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;
    char *msg = "Wieksza liczba to: %d\n";

    printf("Podaj dwie liczby: ");
    scanf("%d%d", &a, &b);

    if (a > b) {
	printf(msg, a);
    } else if (b > a) {
	printf(msg, b);
    } else {
	printf("Liczby sa rowne!\n");
    }
}
