#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y;
    printf("Unesite vrijednosti x i y neophodne za izracunavanje izraza a, b i c:\n");
    scanf("%d %d", &x, &y);

    int a = x * y;
    int b = x + y;
    double c = b / y;
    
    printf("Rjesenja datih izraza su: %d, %d i %lf", a, b, c);
    return 0;
}