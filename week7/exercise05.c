#include <stdio.h>
#include <stdlib.h>

int veci(int a, int b){
    if(a > b){
        printf("Veci je  broj %d.\n", a);
        return a;
    } else{
        printf("Veci je broj %d.\n", b);
        return b;
    }
}
int main(){
    veci(3,4);
    veci(10,8);
    veci(-3,-8);

    return 0;
}
