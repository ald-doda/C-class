#include <stdio.h>
#include <stdlib.h>

int znak(int x){
    if(x > 0){
        printf("Znak je pozitivan.\n");
        return 1;
    } else if(x == 0){
        printf("Znak je nula.\n");
        return 0;
    } else{
        printf("Znak je negativan.\n");
        return -1;
    }
}
int main(){
    int n;
    scanf("%d", &n);

    znak(n);
    return 0;
}
