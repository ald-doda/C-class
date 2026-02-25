#include <stdio.h>
#include <stdlib.h>

int main(){
    int d;
    printf("Unesite vrijednost dolara koju zelite da pretvorite u eure:\n");
    scanf("%d", &d);
    double e = d * 0.83;
    printf("Vrijednost novca u eurima je %lf.\n", e);
    return 0;

}
