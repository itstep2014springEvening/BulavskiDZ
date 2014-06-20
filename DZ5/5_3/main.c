#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int p;
    int n=1;
    double z;
    printf("Enter number:\n");
    scanf("%d", &x);
    printf("Enter power:\n");
    scanf("%d", &p);
    printf("_________\n");
    if (p>0)
    {
        for (int i=0; i<p; ++i)
        {
            n*=x;
        }
        printf("Result = %d", n);
    }
    else
    {
        for (int i=0; i>p; --i)
        {
            n*=x;
        }
        z=1.0/n;
        printf("Result = %f", z);
    }
    return 0;
}
