#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Unesite vrijednosti tri broja gdje zelite izracunati sumu a i c, kao i razliku c i a:\n");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a - c;
    int raz = c - a;
    printf("Suma %d i %d je broj %d, a razlika brojeva %d i %d je %d.\n", a, c, sum, c, a, raz);
    return 0;

}

