#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double P;
    printf("Unesite povrsinu kruga ciji obim i poluprecnik zelite izracunati:\n");
    scanf("%lf", &P);

    #INCLUDE PI 3.14;
    double r = sqrt(P/PI)
    double O = 2 * r * PI;
    printf("Obim kruga za datu povrsinu je je %lf, a poluprecnik kruga za povrsinu p = %lf je %lf.\n", O, P, r);
    return 0;
}