#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Unesite vrijednosti a i b za izračunavanje sume, proizvoda i razlike:\n");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int pro = a * b;
    int raz = a - b;

    printf("Suma dva broja je %d, proizvod %d, a razlika %d", sum, pro, raz);
    return 0;
}