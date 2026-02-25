#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    printf("Unesite x i y potrebne za izracunavanje izraza:\n");
    scanf("%d %d", &x, &y);

    double izraz = (x-y)/3;

    printf("Rjesenje izraza je %lf.\n", izraz);
    return 0;

}
