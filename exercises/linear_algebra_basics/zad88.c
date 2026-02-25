#include <stdio.h>
#include <stdlib.h>

int main(){
    int v, t, a;
    printf("Unesite brzinu, vrijeme kretanja kao i rad u predvidjenim jedinicama:\n");
    scanf("%d %d %d", &v, &t, &a);
    double s = (v*t) + (a*t*2)/2;

    printf("Predjeni put pri jednolikom kretanju je %lf.\n", s);
    return 0;
}
