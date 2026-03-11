#include <stdio.h>
#include <stdlib.h>

void prNpr(int n){
    int pom = n;
    int sumPar = 0;
    int sumNePar = 0;
    while(pom > 0){
        int cif = pom % 10;
        if(cif % 2 == 0) sumPar += 1;
        else if(cif % 2 != 0) sumNePar += 1;

        pom /= 10;
    }
    if(sumPar == sumNePar){
        printf("Broj ima isti broj parnih i neparnih cifara.\n");
    } else {
    printf("Broj nema isti broj parnih i neparnih cifara.\n");
    }
}

int main(){
    prNpr(4343);
    return 0;
}

