#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Unesite brojeve a, b i c ciju sumu kvadrata zelite izracunati:\n");
    scanf("%d %d %d", &a, &b, &c);
    int sum = pow(a, 2) + pow(b, 2) + pow(c, 2);
    printf("Suma kvadrata brojeva %d, %d i %d je %d.\n", a, b, c, sum);
    return 0;
}