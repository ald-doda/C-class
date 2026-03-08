#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Unesite broj n:\n");
    scanf("%d", &n);

    int pom = n;
    while(pom % 2 == 0) pom /= 2;
    while(pom % 3 == 0) pom /= 3;
    while(pom % 5 == 0) pom /= 5;

    if(pom == 1){
        printf("Broj je Hemingov.\n");
    } else{
        printf("Broj nije Hemingov.\n");
    }
    return 0;
}
