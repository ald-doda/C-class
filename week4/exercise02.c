#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Unesite trocifreni broj n:");
    scanf("%d", &n);

    int cif = 0;
    int s = n/100;
    int d = (n/10)%10;
    int j = n % 10;
    cif = s + d + j;
    printf("Zbir cifara broja %d je %d", n, cif);

}
