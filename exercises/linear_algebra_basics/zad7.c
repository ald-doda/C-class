#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Unesite broj n ciji kvadrat zelite da izracunate:\n");
    scanf("%d", &n);
    int kv = pow(n, 2);
    printf("Kvadrat broja %d je broj %d.\n", n, kv);
    return 0;

}
