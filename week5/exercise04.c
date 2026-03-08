#include <stdio.h>
#include <stdlib.h>

int main(){
    int brojac;
    int brPalih = 0;
    int brPolozilih = 0;

    printf("Unesite rezultat za 10 studenata:\n");
    for(brojac = 0; brojac < 10; brojac++){
        int rezultat;
        scanf("%d", &rezultat);
        if(rezultat == 1){
            brPolozilih ++;
        } else{
        brPalih ++;
        }
    }
    printf("Polozilo je %d studenata, a palo %d studenata.\n", brPolozilih, brPalih);

    if(brPolozilih > 8){
        printf("Povecati platu profesoru.\n");
    }
    return 0;
}
