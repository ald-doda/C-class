#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Unesite vrijednostica stranica trougla ciji obim zelite izracunati:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    int o = a + b + c;
    printf("Obim trougla je %d.\n", o);
    return 0;
}