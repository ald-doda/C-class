#include <stdio.h>
#include <stdlib.h>

void piramida(int n){
    for(int i = 0 ; i <= n ; i++){
            printf("\n");
        for(int s = 1 ; s <= i ; s ++){
            for(int j = 0; j < 1; j++){
                printf(" %d", s);
            }
        }
    }
    for(int i = n - 1; i > 0 ; i--){
            printf("\n");
        for(int s = i; s >= 1; s--){
            for(int j = 1 ; j > 0; j--){
                printf(" %d", s);
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    piramida(n);
    return 0;
}
