#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
     double x1, y1;
     printf("Unesite koordinate x1 i y1 od tacke M1:\n");
     scanf("%lf %lf", &x1, &y1);
     double r = sqrt(((x1*x1) +  (y1*y1)));
     printf("Rastojanje je %lf.\n", r);
     return 0;
}
