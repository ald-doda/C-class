#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Unesite brojeve a, b i c ciji korijen sume kvadrata zelite izracunati:\n");
    scanf("%d %d %d", &a, &b, &c);
    double korijen = sqrt(pow(a, 2) + pow(b,2) + pow(c, 2));
    printf("Korijen sume kvadrata brojeva %d, %d i %d je %lf.\n", a, b, c, korijen);
    return 0;
}