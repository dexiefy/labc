#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, j, v, k, suma, max = 0;	//k-krawedzie v-wierzcholki

    {
	printf("Podaj liczbę wierzcholkow: \n");
	scanf("%d", &v);
	printf("Podaj liczbę krawedzi: \n");
	scanf("%d", &k);
    }
//losowe generowanie elementow macierzy
    int tab[v][k];
    srand(time(NULL));
    for (i = 0; i < k; i++)
	for (j = 0; j < v; j++)
	    tab[i][j] = rand() % 2;
// zbyt duzo jedynek w wierszu
//jak sprawic by po wpisaniu 2 jedynek w wers, program zaczal wpisywac tylko 0

//wyswietlenie macierzy
    for (i = 0; i < k; i++) {
	for (j = 0; j < v; j++)
	    printf("%d ", tab[i][j]);
	printf("\n");
    }

//zliczanie stopni wierzcholkow i stopnia grafu
    for (j = 0; j < v; j++) {
	suma = 0;
	for (i = 0; i < k; i++)

	    suma = suma + tab[i][j] % 2;
	if (suma > max)
	    max = suma;

	printf("Stopien wierzcholka nr%d = %d\n", j, suma);
    }
    printf("Stopien grafu: %d\n\n", max);
}
