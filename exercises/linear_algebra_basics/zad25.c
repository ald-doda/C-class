#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Unesite stranicu a da biste izracunali obim kvadrata:\n");
    scanf("%d", &a);
    int obim = 4 * a;
    printf("Obim kvadrata cija je stranica a = %d jednak je %d.\n", a, obim);
    return 0;
}