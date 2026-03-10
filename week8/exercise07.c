#include <stdio.h>
#include <stdlib.h>

int paran(int n){
    if(n % 2 == 0) return 1;
    else return 0;
}

int main(){
    printf("%d\n", paran(3));
    printf("%d\n", paran(8));
    return 0;
}
