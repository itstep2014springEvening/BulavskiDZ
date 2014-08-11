#include <stdio.h>
#include <stdlib.h>
#include "MyRandom.h"

int main()
{
    int i=0;
    printf ("Wiki random is:\n");
    for (i; i<=10; ++i)
    {
        printf ("%d\n", WikiTableRandom ());
    }
    printf ("\nMy random is:");
    for (i; i>0;--i)
    {
        printf ("\n%d", MyRandom ());
    }
    return 0;
}

