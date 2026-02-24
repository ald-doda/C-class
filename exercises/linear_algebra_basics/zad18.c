#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b;
    printf("Unesite brojeve a i b ciju ar. sredinu apsolutnih vrijednosti zelite izracunati:\n");
    scanf("%d %d", &a, &b);
    double arS = abs(a+b)/2;
    printf("Aritmetricka sredina apsolutne vrijednosti od %d i %d je %lf.\n", a, b, arS);
    return 0;
}