#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Unesite dva broja:\n");
    scanf("%d %d", &a, &b);
    int zbir = a+b;
    printf("Zbir brojeva %d i %d je broj %d.\n", a, b, zbir);
}

