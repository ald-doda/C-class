#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b;
    printf("Unesite stranice a i b da biste izracunali obim pravougaonika:\n");
    scanf("%d %d", &a, &b);
    int obim = 2 * (a + b);
    printf("Obim pravougaonika cije su stranice a = %d i b = %d jednak je %d.\n", a, b, obim);
    return 0;
}