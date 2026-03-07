#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Unesite trocifreni broj n:\n");
    scanf("%d", &n);

    int s = n/100;
    int d = (n/10)%10;
    int j = n%10;
    int obrCif= j*100 + d*10 + s;
    printf("Obrnuti redosljed cifara broja %d je %d.\n", n, obrCif);

}
