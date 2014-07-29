#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, p=0, x=0, n;
    printf("Vvedite chislo:");
    scanf("%d", &n);
    i=n;
    while (i>0)
    {
        x=(x*10)+(i%12);
        i/=12;
    }
    i=x;
    while (i>0)
    {
        p=(p*10)+(i%10);
        i/=10;
    }
    printf("%d",p);
    return 0;
}
