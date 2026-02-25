#include <stdio.h>
#include <stdlib.h>

int main(){
    double K;
    printf("Unesite vrijednost stepena u Kelvinima da biste ih pretvorili u Celzijuse:\n");
    scanf("%lf", &K);

    double C = K - 273.15;

    printf("Temperatura u Celzijusima je %lf.\n", C);
    return 0;
}
