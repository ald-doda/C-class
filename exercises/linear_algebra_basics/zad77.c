#include <stdio.h>
#include <stdlib.h>

int main(){
    int C;
    printf("Unesite vrijednost temperature u Celzijusima:\n");
    scanf("%d", &C);

    double F = (C * 1.8) + 32;
    printf("Vrijednost temperature u Farenhajtima je %lf.\n", F);
    return 0;
}
