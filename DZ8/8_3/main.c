#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p=0, i;
    printf("Vvedite chislo ");
    scanf ("%d", &n);
    i=n;
    while (i>0)
    {
        p=(p*10)+(i%10);
        i/=10;
    }
    if (p==n)
    {
        printf ("Palindrom");
    }
    else
    {
        printf ("Ne palindrom");
    }
    return 0;
}
