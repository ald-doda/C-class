#include <stdio.h>
#include <stdlib.h>

int main(){
    int p, a;
    printf("Unesite povrsinu p i stranicu a trougla ciju visinu h zelite izracunati:\n");
    scanf("%d %d", &p, &a);

    double h = (2*p)/a;

    printf("Visina h trougla je %lf.\n", h);
    return 0;
}