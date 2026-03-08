#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int pom = n;
    int sumCif = 0;
    while(pom > 0){
        sumCif += pom % 10;
        pom /=10;
    }
    printf("Suma cifara je: %d", sumCif);
    return 0;
}
