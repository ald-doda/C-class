#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    printf("Unesite vrijednosti dva broja ciju ar. sredinu zelite da izracunate:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    double arSrd = (a+b+c)/3;
    printf("Aritmetricka sredina brojeva %lf, %lf i %lf je %lf.\n", a, b, c, arSrd);
    return 0;

}

