#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b;
    printf("Unesite stranice a i b da biste izracunali povrsinu pravougaonika:\n");
    scanf("%d %d", &a, &b);
    int povrsina = a * b;
    printf("Povrsina pravougaonika cije su stranice a = %d i b = %d jednaka je %d.\n", a, b, povrsina);
    return 0;
}