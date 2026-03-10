#include <stdio.h>
#include <stdlib.h>

int sumaCif(int n){
    int sumCif = 0;
    int pom = n;
    while(pom > 0){
        int cif = pom % 10;
        sumCif = sumCif + cif;
        pom /= 10;
    } return sumCif;
}


int main(){
    printf("Suma cifara broja je %d.\n", sumaCif(3321));
    return 0;
}
