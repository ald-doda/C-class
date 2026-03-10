#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prost(int n){
    int brDj = 0;
    for(int i = 1; i<=n;i++){
        if(n % i == 0){
            brDj++;
        }
    }
    if(brDj <= 2) return true;
    else return false;
}
int sumaProstih(int n){
    int sumP = 0;
    for(int i = 1; i <=n; i++){
        if(prost(i) == true){
            sumP = sumP + i;
        }
    } return sumP;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sumaProstih(n));
    return 0;
}
