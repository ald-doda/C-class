#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int i = 1; i<3000;i++){
        for(int j = 1; j < 3000;j++){
            int sumDjI = 0;
            int sumDjJ = 0;

    for(int k = 1; k < i; k++){
        if(i % k == 0){
            sumDjI= sumDjI + k;
        }
    }
    for(int m = 1; m < j; m++){
        if( j % m == 0){
            sumDjJ = sumDjJ + m;
        }
    }
    if( i == sumDjJ && j == sumDjI){
        printf("%d %d\n", i, j);
    }
      }
    }
    return 0;
}
