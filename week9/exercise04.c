#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool savrsen(int n){
    int sumD = 0;
    for(int i = 1; i<n;i++){
        if(n % i == 0){
            sumD = sumD + i;
        }
    }
    if(sumD == n) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", savrsen(n));
    return 0;
}
