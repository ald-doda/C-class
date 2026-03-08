#include <stdio.h>
#include <stdlib.h>

int main(){
    int brB;
    printf("Unesite broj bodova?\n");
    scanf("%d", &brB);

    printf(brB > 50 ? "Polozio" : "Pao");
    return 0;
}
