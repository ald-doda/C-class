#include <stdio.h>
#include <stdlib.h>

void unosNiza(int niz[], int n){
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &niz[i]);
    } printf("\n");
}

void stampaNiza(int niz[], int n){
    for(int i = 0 ; i < n ; i++){
        printf("%d ", niz[i]);
    } printf("\n");
}

void arSrNiza(int niz[], int n){
    int sumCl = 0;
    double arSrNiza = 0;
    for(int i = 0 ; i < n ; i++){
        sumCl += niz[i];
        }  arSrNiza = sumCl / n;
         printf("%lf\n", arSrNiza);
    }

int main(){
    int n;
    scanf("%d", &n);
    int niz[n];
    unosNiza(niz, n);
    stampaNiza(niz, n);
    arSrNiza(niz, n);

    return 0;
}

