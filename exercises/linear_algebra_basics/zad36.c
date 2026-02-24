#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, a;
    printf("Unesite vrijednosti x i a neophodne za izracunavanje izraza:\n");
    scanf("%d %d", &x, &a);
    double izraz = 2*(x*a)/3;
    printf("Rezultat datog izraza je %lf.\n", izraz);
    return 0;
}