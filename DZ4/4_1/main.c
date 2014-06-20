#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int x;
    int z=1;
    printf("Enter number n:\n");
    scanf("%d", &n);
    printf("Enter number x:\n");
    for (int i=n; i!=0; --i)
    {
        scanf("%d", &x);
        z*=x;
    }
    printf("Result = %d", z);
    return 0;
}
