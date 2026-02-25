#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, s;
    printf("Unesite vrijednosti za litre i kilometre:\n");
    scanf("%d %d", &x, &s);
    double n = x*100/s;
    printf("Za 100km ce se potrositi %lf litara.\n", n);
    return 0;
}
