#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2, a1, a2;
    scanf("%d %d %d %d %d %d", &x1, &x2, &y1, &y2, &a1, &a2);

    if((x1 <= x2 + a2 && x2 <= x1 + a1) && (y1 <= y2 + a2 && y2 <= y1 + a1)){
        printf("Kvadrati se sjeku.\n");
    } else{
        printf("Kvadrati se ne sjeku.\n");
    }

    return 0;
}
