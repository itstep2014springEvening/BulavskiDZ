#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=64;
    while (n!=0)
    {
        n/=2;
        printf("%d\n", n);
    }
    return 0;
}
