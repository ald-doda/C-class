#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    printf("Unesite stranicu a da biste izracunali povrsinu kvadrata:\n");
    scanf("%d", &a);
    int povrsina = pow(a, 2);
    printf("Povrsina kvadrata cija je stranica a = %d jednaka je %d.\n", a, povrsina);
    return 0;
}