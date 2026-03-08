#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int pom = n;
    int brCif = 0;
    int AmBroj;
    while(pom > 0){
        brCif ++;
        pom /= 10;

    }
    pom = n;
    int suma = 0;
    while(pom > 0){
        int cif = pom % 10;
        suma += pow(cif, brCif);
        pom /=10;
    }

    if(suma == n){
        printf("Broj je Amstrongov.\n");
    } else{
    printf("Broj nije Amstrongov.\n");
    }
    return 0;
}
