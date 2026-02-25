#include <stdio.h>
#include <stdlib.h>

int main(){
    int brojac = 0;
    int suma = 0;
    double prosjek;

    for(brojac = 0; brojac < 5; brojac++){
        int ocjena;
        scanf("%d", &ocjena);
        suma = suma + ocjena;
        prosjek = suma/5.0;
    }

    printf("Prosjek je: %lf.\n", prosjek);
    return 0;
}
