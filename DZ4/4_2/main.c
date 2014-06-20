#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int p;
    int m=1;
    printf("Enter number:\n");
    scanf("%d",&x);
    printf("Enter power:\n");
    scanf("%d",&p);
    printf("________\n");
    for (int i=0; i<p; ++i)
    {
        m*=x;
    }
    printf("Result = %d", m);
    return 0;
}
