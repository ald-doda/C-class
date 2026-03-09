#include <stdio.h>
#include <stdlib.h>

void faktorijel(int n){
    int fakt = 1;
   for(int i = 1; i<=n;i++){
    fakt = fakt* i;
   }
   printf("Faktorijel je: %d.\n", fakt);
}

int main(){
    faktorijel(3);
    return 0;
}
