#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y;
    printf("Unesite vrijednosti x i y neophodne za izracunavanje izraza c, d i e:\n");
    scanf("%d %d", &x, &y);

    int c = x * y;
    int d = x - y;
    int e = c - x + y;
    
    printf("Rjesenja datih izraza su: %d, %d i %d", c, d, e);
    return 0;
}