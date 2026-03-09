#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int dj;
    for(int i = 1; i<=n;i++){
        if(n % i == 0){
            dj = n % i;
        } printf("Djelioc je: %d.\n", dj);
    }
    return 0;
}
