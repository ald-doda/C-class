#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int pom = n;
    int min = 9;
    int cif, br;
    while(pom > 0){
        cif = pom % 10;

        pom /= 10;

        if(cif < min){
            min = cif;
        }
    }
    printf("Najmanja cifra je: %d.\n", min);
    return 0;
}
