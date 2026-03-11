#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zbir_kvadrata(int n){
    int zbKv = 0;
    for(int i = 1; i<=n;i++){
        zbKv += i*i;
    } return zbKv;
}

int main(){
    printf("%d", zbir_kvadrata(2));
    return 0;
}
