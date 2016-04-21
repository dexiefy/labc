#include <stdlib.h>
#include <stdio.h>

void DFS(int);
int G[100][100],visited[100],n, count = 0;    

int main()
{
    int a, b;			//liczba wierzcholkow, dane do macierzy
    int k;			// liczba krawedzi
    int i, j, c, d, q, w, u, y;	//zmienne pomocnicze do macierzy
    int z;			//zmienna pomocnicza dla petli wypelniajacej macierz (by uniknac -std=c99)
    int max = 0, suma; //sumaqw;	// zmienne do obliczania stopni wierzcholkow oraz grafu
    int euler;

    printf("Podaj liczbę wierzcholkow: \n");
    scanf("%d", &a);
    b = a;
    c = a;
    d = a;
    n = a;
    printf("Podaj liczbę krawedzi: \n");
    scanf("%d", &k);

    int mac[a][b];		//macierz glowna
    int cam[c][d];    //macierz pomocnicza
// tworzenie macierzy wypelnionych zerami
    for (i = 0; i < a; i++) {
	for (j = 0; j < b; j++)
	    mac[i][j] = 0;
    }

    for (q = 0; q < a; q++) {
	for (w = 0; w < b; w++)
	    cam[q][w] = 0;
    }
if (k == a - 2) {
    printf("Graf nie jest spojny. Brak krawedzi do polaczenia wszystkich wierzcholkow\n");
}
    printf("\tUWAGA!! Wierzcholki numerowane sa od zera!\n");

//wypelnianie macierzy danymi wprowadzanymi przez uzytkownika
    for (z = 0; z < k; z++) {
	printf("Podaj numery dwoch wierzcholkow polaczonych krawedzia: \n");
	scanf("%d%d", &i, &j);
	int q = i;
	int w = j;
  int y = i;
  int u = j;
	if (i == j) {
	    mac[i][j] += 2;	//stopien wierzcholka zwiekszony o 2 dla petli
	    cam[q][w] += 1;
      G[y][u] += 1;
	}

	else {
G[y][u] += 1;
G[y][u] += 1;
      mac[i][j] += 1;
	    mac[j][i] += 1;
	    cam[q][w] += 1;
	    cam[w][q] += 1;
	}
    }



// redukcja macierzy pomocniczej
    for (y = 0; y < a; y++) {
    for (u = 0; u < b; u++)
    if (G[y][u] > 1) {
      G[y][u] = 1;
}
}

//zliczanie stopni wierzcholkow i stopnia grafu
  for (i = 0; i < b; i++) {
	suma = 0;
	for (j = 0; j < a; j++)

	    suma = suma + mac[j][i];
	if (suma > max)
	    max = suma;

// Zwrot danych dotyczacych grafu
	if (suma % 2 == 1) {
	    printf("WIERZCHOŁEK NUMER %d\nStopień nieparzysty! Graf nie jest grafem eulerowskim\nStopień: %d\n\n", i, suma);
	}
	if (suma % 2 == 0) {
	    printf("WIERZCHOLEK NUMER %d\nStopień: %d\n\n", i, suma);
	}
 }

  printf("Stopien grafu: %d\n\n", max);

for( y = 0; y < n; y++)
    visited[y] = 0;
printf("Przeszukanie grafu metodą DFS!\nOsiągnięte wierzchołki:\n");
DFS(0);
if (count == y) {
  printf("\nGraf jest spójny!\n");
  if (suma % 2 == 0) {
  euler = 1;
}
}
else{
printf("\nGraf nie jest spójny! Osiągnięto jedynie %d z %d wierzchołków\n", count, a);
euler = 0;}

if (euler == 1) {
  printf("Graf jest grafem eulerowskim\n");
}

else;
  printf("Graf nie jest grafem eulerowskim\n");

}
// funkcja sprawdzajaca spojnosc grafu poprzez DFS
void DFS(int y)
{
    int u;

    printf("%d ", y);

    visited[y] = 1;
       count = count + 1;

    for(u = 0; u < n; u++)
       if(!visited[u] && G[y][u] == 1)
              DFS(u);
}
