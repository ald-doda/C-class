#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double kvadrat(double x){
    double kv = pow(x, 2);
    return kv;
}
int main()
{
    double n;
    scanf("%lf", &n);
    kvadrat(n);
    printf("Kvadrat od n je: %lf.\n", kvadrat(n));
    return 0;
}
