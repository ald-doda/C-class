#include <stdio.h>
#include <stdlib.h>

int zbir(int a, int b){
    int zb = a + b;
    return zb;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    zbir(a, b);
    printf("Zbir od %d i %d je %d.\n", a, b, zbir(a,b));
    return 0;
}
