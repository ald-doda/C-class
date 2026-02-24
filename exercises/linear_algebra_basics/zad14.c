#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Unesite brojeve a i b ciju sumu kvadrata zelite izracunati:\n");
    scanf("%d %d", &a, &b);
    int sum = pow(a, 2) + pow(b, 2);
    printf("Suma kvadrata brojeva %d i %d je %d.\n", a, b, sum);
    return 0;
}