#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    printf("Unesite stranicu a da biste izracunali dijagonalu kvadrata:\n");
    scanf("%d", &a);
    double dijagonala = a * sqrt(2);
    printf("Povrsina kvadrata cija je stranica a = %d jednaka je %lf.\n", a, dijagonala);
    return 0;
}