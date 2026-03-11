#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void unosNiza(int niz[], int n){
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &niz[i]);
    }
}
void stampaNiza(int niz[], int n){
    for(int i = 0; i < n ; i++){
        printf("%d ", niz[i]);
    }
    printf("\n");
}

void kvadratniNiz(int niz[], int n){
    for(int i = 0 ; i < n ; i++){
        niz[i] = niz[i] * niz[i];
        printf("%d ", niz[i]);
        } printf("\n");
    }


int main(){
    int n;
    scanf("%d", &n);
    int niz[n];
    unosNiza(niz, n);
    stampaNiza(niz, n);
    kvadratniNiz(niz, n);
}


