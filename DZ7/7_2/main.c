#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, i=2;
    printf("Vvedite chislo:");
    scanf("%d", &x);
    printf("%d = ",x);
    while (i<=sqrt(x))
    {
        if (x%i==0)
        {
            printf("%d*",i);
            x/=i;
        }
        else
        {
             ++i;
        }
    }
    printf("%d",x);
    return 0;
}
