#include <stdio.h>
#include <stdlib.h>

int main(){
    int brojac = 0;
    int suma = 0;

    printf("Unesite 10 ocjena:\n");

    while(brojac < 10){
        int ocjena;
        scanf("%d", &ocjena);

        suma = suma + ocjena;
        brojac++;
    }
    double prosjek = suma / 10.0;
    printf("Prosjecna ocjena je: %lf.\n", prosjek);
    return 0;
}
