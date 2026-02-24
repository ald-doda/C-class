#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a, b, c;
    printf("Unesite brojeve a, b i c:\n");
    scanf("%d %d %d", &a, &b, &c);
    int raz =  c - b;
    int pro = a * b;
    printf("Razlika %d i %d je broj %d, a proizvod %d i %d je %d.\n", c, b, raz, a, b, pro);
    return 0;
}
