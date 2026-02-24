#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int r;
    printf("Unesite poluprecnik kruga ciju povrsinu zelite izracunati:\n");
    scanf("%d", &r);

    #INCLUDE PI 3.14;
    double P = pow(r, 2) * PI;
    printf("Povrsina kruga za poluprecnik r = %d je %lf.\n", r, P);
    return 0;
}