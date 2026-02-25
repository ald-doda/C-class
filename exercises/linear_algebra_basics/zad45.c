#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Unesite stranice trougla ciji obim i povrsinu zelite izracunati:\n");
    scanf("%d %d %d", &a, &b, &c);

    int o = a + b + c;
    double s = o/2;
    double p = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Obim trougla je %d, a povrsina trougla je %lf.\n", o, p);
    return 0;
}