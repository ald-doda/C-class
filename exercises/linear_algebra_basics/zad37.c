#include <stdio.h>
#include <stdlib.h>

int main(){
    int r;
    printf("Unesite poluprecnik kruga ciji obim zelite izracunati:\n");
    scanf("%d", &r);

    #INCLUDE PI 3.14;
    double O = 2 * r * PI;
    printf("Obim kruga za poluprecnik r = %d je %lf.\n", r, O);
    return 0;
}