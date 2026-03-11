#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool zeton(int k, int n){
    int brZ = n + (n - 1)* 2 + (n - 2);
    if(brZ == k) return true;
    else return false;
}

int main(){
    printf("%d\n", zeton(20, 6));
    return 0;
}
