#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Unesite stranicu a da biste izracunali obim kocke:\n");
    scanf("%d", &a);
    int obim = 12 * a;
    printf("Obim kocke cija je stranica a = %d jednak je %d.\n", a, obim);
    return 0;
}