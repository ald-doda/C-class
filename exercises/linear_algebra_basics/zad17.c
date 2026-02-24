#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Unesite brojeve a, b i c ciju sumu kubova zelite izracunati:\n");
    scanf("%d %d %d", &a, &b, &c);
    int sum = pow(a, 3) + pow(b, 3) + pow(c, 3);
    printf("Suma kubova brojeva %d, %d i %d je %d.\n", a, b, c, sum);
    return 0;
}