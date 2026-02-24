#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b;
    printf("Unesite brojeve a i b ciji korijen sume kvadrata zelite izracunati:\n");
    scanf("%d %d", &a, &b);
    double korijen = sqrt(pow(a, 2) + pow(b,2));
    printf("Korijen sume kvadrata brojeva %d i %d je %lf.\n", a, b, korijen);
    return 0;
}