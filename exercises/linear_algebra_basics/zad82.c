#include <stdio.h>
#include <stdlib.h>

int main(){
    int tg, gr;
    printf("Unesite godinu rodjenja i godinu starosti:\n");
    scanf("%d %d", &tg, &gr);

    int gs = tg - gr;
    printf("Godina rodjenja je %d.\n", gs);
    return 0;
}
