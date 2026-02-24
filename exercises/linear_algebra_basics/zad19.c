#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c, d;
    printf("Unesite brojeve a, b, c i d ciju ar. sredinu apsolutnih vrijednosti zelite izracunati:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    double arS = abs(a+b+c+d)/4;
    printf("Aritmetricka sredina apsolutne vrijednosti od %d, %d, %d i %d je %lf.\n", a, b, c, d, arS);
    return 0;
}