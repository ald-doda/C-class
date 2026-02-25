#include <stdio.h>
#include <stdlib.h>

int main(){
    int v;
    printf("Unesite vrijednost u km/h koju zelite pretvoriti u m/s:\n");
    scanf("%d", &v);
    double v1 = v * 1000/3600;

    printf("Vrijednost u m/s je: %lf.\n", v1);
    return 0;

}
