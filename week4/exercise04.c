#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Unesite stranice trougla abc:\n");
    scanf("%d %d %d", &a, &b, &c);

    double s = (a+b+c)/2;
    double p = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Povrsina trougla abc sa sa zadatim stranicama %d %d %d je %lf.\n", a, b, c, p);
}
