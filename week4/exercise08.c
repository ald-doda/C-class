#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r;
    printf("Unesite poluprecnik r:\n");
    scanf("%lf", &r);

    #define pi 3.14
    double p= pi*pow(r,2);
    double o= 2*pi*r;
    printf("Povrsina kruga je %lf, a obim kruga je %lf.\n", p, o);

  return 0;
}
