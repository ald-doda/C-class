#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    printf("Unesite stranicu a da biste izracunali povrsinu kocke:\n");
    scanf("%d", &a);
    int povrsina = 6 * pow(a, 2);
    printf("Povrsina kocke cija je stranica a = %d jednaka je %d.\n", a, povrsina);
    return 0;
}