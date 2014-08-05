#include <stdio.h>
int perevod(int n, int c)
{
    int i=0, p=0, x=0;
    while (n>0)
    {
        x=(x*c)+(n%c);
        n/=c;
        ++i;
    }
    while (i>0)
    {
        p=x%c;
        x/=c;
        --i;
        if (p>=10)
        {
            printf("%c", p+55);
        }
        else
        {
            printf("%d", p);
        }
    }
    return 0;
}
