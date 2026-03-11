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

void bubbleSort(int niz[], int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n - 1 ; j++){
            if(niz[j] > niz[j+1]){
                int pom = niz[j];
                niz[j] = niz[j+1];
                niz[j+1] = pom;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int niz[n];
    unosNiza(niz, n);
    stampaNiza(niz, n);
    bubbleSort(niz, n);
    stampaNiza(niz, n);
    return 0;
}


