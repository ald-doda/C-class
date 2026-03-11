#include <stdio.h>
#include <stdlib.h>

void ucitajNiz(int niz [], int n){
    for(int i = 0; i< n ; i++){
        scanf("%d", &niz[i]);
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    int niz[n];
    ucitajNiz(niz, n);
    return 0;
}
