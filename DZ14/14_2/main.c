#include <stdio.h>
#include <stdlib.h>
#include "myperevod.h"

int main()
{
    int n, c;
    printf("Vvedite chislo:");
    scanf("%d", &n);
    printf("Vvedite chislo sistemy:");
    scanf("%d", &c);
    while (c<2 || c>36)
    {
        printf("Chislo sistemy doljno byt' ot 2 do 36\n");
        scanf("%d", &c);
    }
    printf("Result = ");
    perevod(n,c);
    return 0;
}
