#include <stdio.h>
#include <stdlib.h>

int GCD (int a, int b);
int main()
{
    int n;
    printf("Vvedite chislo:");
    scanf("%d", &n);
    for (int i=1; i<n; ++i)
    {
        for (int j=1; j<=n; ++j)
        {
            if (GCD(i,j)==1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int GCD (int a, int b)
{
    int c;
    while (c>0)
    {
        c=a%b;
        a=b;
        b=c;
        if (c==0)
        {
            b=a;
        }
    }
    return b;
}
