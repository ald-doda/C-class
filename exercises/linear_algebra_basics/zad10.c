#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Unesite vrijednosti broja cijo kvadrat zelite da izracunate:\n");
    scanf("%d", &a);
    int kv = pow(a, 2);
    printf("Kvadrat  broja %d je %d.\n", a, kv);
    return 0;

}
