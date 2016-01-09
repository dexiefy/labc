/*5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy,
 a następnie wypisze zawartość tej tablicy od początku i od końca.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int t[n];
    size_t i;

    printf("Podaj liczbe elementow: \n");
    scanf("%d\n", &n);

    printf("Podaj %d liczb calkowitych: \n", n);
    for (i = 1; i <= n; i++) {
	scanf("%d", &t[n]);
	printf("%d ", t[n]);
    }


}
