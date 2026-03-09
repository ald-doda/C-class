#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int clan0 = 1;
    int clan1 = 1;
    int clan2;

    if(n == 0 || n == 1){
        printf("Rezultat je 1.\n");
    } else{
        for(int i = 0; i < n-1;i++){
            clan2 = clan1 + clan0;
            clan0 = clan1;
            clan1 = clan2;
    }}
    printf("%d", clan2);
    return 0;
}
