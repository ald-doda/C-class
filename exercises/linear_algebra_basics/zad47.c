#include <stdio.h>
#include <stdlib.h>

int main(){
    int p, h;
    printf("Unesite povrsinu p i visinu h trougla ciju stranicu a zelite izracunati:\n");
    scanf("%d %d", &p, &h);

    double a = (2*p)/h;

    printf("Stranica a trougla je %lf.\n", a);
    return 0;
}