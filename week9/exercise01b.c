#include <stdio.h>
#include <stdlib.h>

double stepen(int a, int n){
    double st = 1;
    double pS = a;
    while(n > 0){
        st *= pS;
        n--;
    }
    while(n < 0){
        st *= 1/ pS;
        n++;
    }
    return st;
}

int main(){
    int a;
    int n;
    scanf("%d %d", &a, &n);

    printf("%lf\n", stepen(a, n));
    return 0;
}
