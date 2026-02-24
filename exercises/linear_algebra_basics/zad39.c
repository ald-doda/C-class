#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int r;
    printf("Unesite poluprecnik kruga ciji obim i povrsinu zelite izracunati:\n");
    scanf("%d", &r);

    #INCLUDE PI 3.14;
    double O = 2 * r * PI;
    double P = pow(r, 2) * PI;
    printf("Obim kruga za dati poluprecnik je %lf, a povrsina kruga za poluprecnik r = %d je %lf.\n", O, r, P);
    return 0;
}