#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    printf("Unesite dva realna broja a i b:\n");
    scanf("%lf %lf", &a, &b);

    if(a<b){
        printf("Broj %lf je manji od broja %lf", a, b);
    } else{
        printf("Broj %lf je manji od broja %lf", b, a);
    }

}
