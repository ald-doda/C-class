#include <stdio.h>
#include <stdlib.h>

int brCifara(int n){
    int brCif = 0;
    while(n>0){
        int cif2 = n % 10;
        brCif++;
        n /= 10;

    } return brCif;
}
void obrni(int n){
    int pom = n;
    int tezina = brCifara(n) - 1;
    int nBr = 0;
    int cif, obrCif;
    int cif1 = pom % 10;
    while (pom > 0){
        cif = pom % 10;
        nBr = nBr + cif*pow(10, tezina);
        tezina = tezina - 1;
        pom /= 10;
    } printf("Obrnute cifre su %d.\n", nBr);
}

int main(){
    obrni(4833);
}
