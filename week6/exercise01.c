#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int pom = n;
    int cif1 = pom % 10;
    int cif;
    int cif2 = -1;
    while(pom > 0){
         cif = pom % 10;

        if(cif1 != cif && cif2 == -1){
            cif2 = cif;
        }
        pom /= 10;
    }
    if(cif2 != cif && cif1 != cif){
                printf("Broj nije dvojak.\n");
            } else{
            printf("Broj je dvojak.\n");
            }

    return 0;
}
