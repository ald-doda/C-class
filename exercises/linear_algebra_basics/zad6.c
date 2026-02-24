#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Unesite brojeve a i b:\n");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("Suma brojeva %d i %d je %d.\n", a, b, sum);
    return 0;
}
