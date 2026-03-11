#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zbir_kvadrata(int n){
    int zbKv = 0;
    for(int i = 1; i<=n;i++){
        zbKv += pow(i, 2);
    } return zbKv;
}

int main(){
    printf("%d", zbir_kvadrata(3));
    return 0;
}
