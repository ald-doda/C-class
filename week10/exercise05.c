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

void najveciEl(int niz[], int n){
    int najveciEl = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(niz[i] > najveciEl){
            najveciEl = niz[i];
        }
    } printf("%d", najveciEl);
    printf("\n");

}
int main(){
    int n;
    scanf("%d", &n);
    int niz[n];
    unosNiza(niz, n);
    stampaNiza(niz, n);
    najveciEl(niz, n);
}

