#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int brDj = 0;
    for(int i = 1; i <= n; i++){
            if(n % i == 0 || n == i){
                brDj ++;
            }
    }
    if(brDj != 2){
        printf("Broj nije prost.\n");
    } else{
        printf("Broj je prost.\n");
    }

    return 0;
}
