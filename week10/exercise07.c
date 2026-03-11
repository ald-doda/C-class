#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

void najNeparEl(int niz[], int n){
    int najmanjiEl = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(niz[i] % 2 != 0 && niz[i] < najmanjiEl){
            najmanjiEl = niz[i];
        }
    } printf("%d\n", najmanjiEl);
}

int main(){
    int n;
    scanf("%d", &n);
    int niz[n];
    unosNiza(niz, n);
    stampaNiza(niz, n);
    najNeparEl(niz, n);

    return 0;
}
