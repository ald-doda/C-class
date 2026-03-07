#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Unesite dva broja a i b koja zelite da poredite:\n");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("%d je vece od %d.", a, b);
    } else if(a < b){
        printf("%d je manje od %d.", a, b);
    } else{
    printf("%d i %d su isti.", a, b);
    }

}
