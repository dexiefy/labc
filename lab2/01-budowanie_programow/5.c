/* Program ten wykonuje konwersję ze stopni na radiany
   według wzoru: rad = 2 * PI * deg / 360    */
#include <stdio.h>
#include <math.h>

int main()
{

    double deg, rad;

    printf("Podaj kat w stopniach : ");
    scanf("%lf", &deg);
    rad = 2 * 3.14159265358979323846 * deg / 360;	/* grep PI /usr/include/math.h */
    printf("%.4f deg = %.4f rad\n", deg, rad);
}
