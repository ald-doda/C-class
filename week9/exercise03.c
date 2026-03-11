#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nzd(int a, int b){
    while(b != 0){
        int pom = b;
        b = a % b;
        a = pom;
    } return a;
}
double nzs(int a, int b){
        double nzs = a * b / nzd(a, b);
    return nzs;
}

int main(){
    printf("%d\n", nzd(48,18));
    printf("%lf\n", nzs(48, 18));
    return 0;

}
