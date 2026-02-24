#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    printf("Unesite broj ciji korijen zelite izracunati:\n");
    scanf("%d", &n);
    double korijen = sqrt(n);
    printf("Korijen broja %d je %lf.\n", n, korijen);
    return 0;
}