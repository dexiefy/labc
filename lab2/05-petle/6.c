/* 6. Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy,
 a następnie wyszukai wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy. */

#include <stdio.h>


int main()
{

    float tablica[5];

    printf("Podaj 6 liczb rzeczywistych: \n");
    scanf("%f %f %f %f %f %f", &tablica[0], &tablica[1], &tablica[2],
	  &tablica[3], &tablica[4], &tablica[5]);

    float min = tablica[0];
    float max = tablica[0];

    for (int i = 0; i < 6; i++) {
	float x = tablica[i];
	if (x > max) {
	    max = x;
	} else if (x < min) {
	    min = x;
	}
    }
    printf("min = %f\nmax = %f\n", min, max);
}
