#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum;
    printf("Unesite sumu novca cija je kamata 17 odsto i nijeste je podizali tri godine:\n");
    scanf("%d", &sum);


    double interes = sum * 3 * 17 / 100;
    double novac = sum + interes;

    printf("Za tri godine cete imati: %lf.\n", novac);
    return 0;
}
