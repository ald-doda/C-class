#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Unesite brojeve a i b ciju sumu kubova zelite izracunati:\n");
    scanf("%d %d", &a, &b);
    int sum = pow(a, 3) + pow(b, 3);
    printf("Suma kubova brojeva %d i %d je %d.\n", a, b, sum);
    return 0;
}