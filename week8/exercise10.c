#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prost(int n){
    if(n % 2 == 0) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", prost(n));
    return 0;
}
