#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i=2, w;
    printf("Vvedite chislo ");
    scanf ("%d", &x);
    while (w!=0)
    {
        w=x%i;
        if (w!=0)
        {
            ++i;
        }
    }
    if (i==x)
    {
        printf ("Prostoe");
    }
    else
    {
        printf ("Sostavnoe");
    }
    return 0;
}
