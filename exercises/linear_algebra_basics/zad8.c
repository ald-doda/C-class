#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    printf("Unesite vrijednosti dva broja ciju ar. sredinu zelite da izracunate:\n");
    scanf("%lf %lf", &a, &b);
    double arSrd = (a+b)/2;
    printf("Aritmetricka sredina brojeva %lf i %lf je %lf.\n", a, b, arSrd);
    return 0;

}
