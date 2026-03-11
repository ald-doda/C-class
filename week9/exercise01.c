#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double stepen(double a, int n){
    double st = 0;
    if(n > 0){
        st = pow(a, n);
    } else{
        st = 1/pow(a, -n);
    }

    return st;
}
int main()
{
    double a;
    scanf("%lf", &a);
    int n;
    scanf("%d", &n);
    printf("%lf", stepen(a, n));
    return 0;
}
