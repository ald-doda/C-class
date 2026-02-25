#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, h;
    printf("Unesite stranicu a i visinu trougla ciju povrsinu zelite izracunati:\n");
    scanf("%d %d", &a, &h);

    double P = (a*h)/2;

    printf("Povrsina trougla je %lf.\n", P);
    return 0;
}