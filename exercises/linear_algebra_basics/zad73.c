#include <stdio.h>
#include <stdlib.h>

int main(){
    int g;
    printf("Unesite vrijednosti galona koje zelite pretvoriti u litre.\n");
    scanf("%d", &g);

    double l = g * 4.54;
    printf("Vrijednost vode u litrima je: %lf.\n", l);
    return 0;

}
