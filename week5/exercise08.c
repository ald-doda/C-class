#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int pom = n;
    int pret = -1;
    int brojac = 0;
    while(pom > 0){
        int cif = pom % 10;
        if(cif == pret){
            brojac++;
        }
        pret = cif;
        pom /= 10;
}

     if(brojac > 0){
        printf("Da, i to %d puta.\n", brojac);
     }
     else{
        printf("Ne.\n");
     }
         return 0;

}
