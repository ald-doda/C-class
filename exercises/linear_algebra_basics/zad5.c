#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, l;
    printf("Unesite vrijednosti za m, n i l:\n");
    scanf("%d %d %d", &m, &n, &l);
    printf("Unijeti brojevi %d, %d i %d u obrnutom redosljedu su %d, %d i %d.\n", m, n , l, l, n, m);
    return 0;

}
