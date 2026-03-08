#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Unesite broj n:\n");
    scanf("%d", &n);

    int s, d, j;
    s = (n/100)%10;
    d = (n/10)%10;
    j = n%10;
    int sumCif = 0;
    sumCif = s + d + j;
    printf("Suma cifara je: %d", sumCif);
    return 0;
}
