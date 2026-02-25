#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Unesite tri broja neopohodna za izracunavanje izraza:\n");
    scanf("%d %d %d", &a, &b, &c);
    int zbir = a + b;
    double izraz = zbir / c;

    printf("Rjesenje izraza je: %lf.", izraz);
    return 0;
}