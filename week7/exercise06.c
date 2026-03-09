#include <stdio.h>
#include <stdlib.h>

int apsolutno(int x){
    if(x >= 0) return x;
     else return -1*x;

}

int main(){
    printf("%d\n", apsolutno(9));
    printf("%d\n", apsolutno(-11));
    printf("%d\n", apsolutno(-3));
    return 0;
}
