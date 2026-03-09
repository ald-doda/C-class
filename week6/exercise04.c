#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n < 10 || n > 99){
        printf("n nije dvocifren broj.\n");
    } else {
        int found = 0;
        for(int i = 10; i < n; i++){
            for(int j = 10; j < n; j++){
                if(i*i + j*j == n*n){
                    printf("%d^2 + %d^2 = %d^2\n", i, j, n);
                    found = 1;
                }
            }
        }
        if(!found){
            printf("Ne postoji ni jedan broj.\n");
        }
    }
    return 0;
}
