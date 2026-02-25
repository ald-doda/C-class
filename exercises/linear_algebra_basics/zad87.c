#include <stdio.h>
#include <stdlib.h>

int main(){
    int glavnica, godine, kS;
    printf("Unesite za koju sumu, koliko godina i koji iznos zelite izracunati kamatni racun:\n");
    scanf("%d %d %d", &glavnica, &godine, &kS);

    double interes = glavnica * godine * kS/100;
    double suma = glavnica + interes;
    printf("Za n godina uz m kamatnu stopu dobicete %lf novca.\n", suma);
    return 0;
}
