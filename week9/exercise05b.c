#include <stdio.h>
#include <stdlib.h>

void piramida(int n){
    for(int i = 1; i <= n; i++){
            printf("\n");
        for(int j = 1; j <= i; j++){
            printf(" %d", j);
        }
    }
    for(int i = n-1 ; i > 0; i--){
        printf("\n");
        for(int j = 1 ; j <= i; j++){
                printf(" %d", j);
        }
    }
}

int main(){
    piramida(5);
    return 0;
}
