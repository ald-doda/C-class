#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b;
    printf("Unesite stranice a i b da biste izracunali dijagonalu pravougaonika:\n");
    scanf("%d %d", &a, &b);
    int dijagonala = sqrt(pow(a, 2) + pow(b, 2))
    printf("Dijagonala pravougaonika cije su stranice a = %d i b = %d jednaka je %d.\n", a, b, dijagonala);
    return 0;
}