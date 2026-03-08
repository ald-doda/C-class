#include <stdio.h>
#include <stdlib.h>

int main(){
    int suma = 0;
    int brojac;
    printf("Unesite 10 ocjena:\n");
    for(brojac = 0; brojac < 10; brojac++){
        int ocjena;
        scanf("%d", &ocjena);
        suma = suma + ocjena;
    }
    double prosjek = suma / 10.0;

    printf("Prosjek je: %3f.\n", prosjek);
    return 0;
}
