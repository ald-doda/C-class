#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, g;
    printf("Unesite dan, mjesec i godinu :\n");
    scanf("%d %d %d", &d, &m, &g);

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
        if(d >= 31){
            d = 1;
            m = m + 1;
        } else{ d = d + 1;
        }
    }
    if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d >= 30){
            d = 1;
            m = m + 1;
        } else{
            d = d + 1;
        }
    }
    if(m == 12){
        if(d >=31){
            d = 1;
            m = 1;
            g = g + 1;
        } else{
            d = d + 1;
        }
    }
    if(m == 2){
        if((g % 4 == 0 && g % 100 != 0)|| g % 400 == 0){
            if(d >= 29){
                d = 1;
                m = m + 1;
            } else{
            d = d + 1;
            }
        } else{
        if(d >= 28){
            d = 1;
            m = m + 1;

    } else{
    d = d + 1;
    }
        } }
    printf("Naredni datum je: %d.%d.%d.\n", d, m, g);

    return 0;
}
