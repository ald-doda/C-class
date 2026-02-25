#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;
    printf("Unesite vrijednosti dana m i n:\n");
    scanf("%d %d", &m, &n);

    double brD = (m+n)/2.0;
    printf("Zajedno bi to uradili za %lf dana.\n", brD);
    return 0;
}
