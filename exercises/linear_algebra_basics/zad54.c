#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y;
    printf("Unesite vrijednosti x i y neophodne za izracunavanje izraza a i b:\n");
    scanf("%d %d", &x, &y);

    int a = x + y;
    int b = x - y;
    
    printf("Rjesenja datih izraza su: %d i %d", a, b);
    return 0;
}