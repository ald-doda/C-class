#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Unesite vrijednosti a, b i c:\n");
    scanf("%d %d %d", &a, &b, &c);

    double d = pow(b, 2) - 4*a*c;

    if(d > 0){
        double x1 = (-b+d)/2;
        double x2 = (-b-d)/2;
        printf("Rjesenja kvadratne jednacine su: %lf i %lf.\n", x1, x2);
    } else if(d == 0){
        double x = (-b)/2;
        printf("Kvadratna jednacina ima jedno rjesenje, i to je: %lf", x);
    } else{
    printf("Rjesenje kvadratne jednacine je imaginaran broj.\n");
    }

   return 0;
}
