#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int c=10;
    printf("Enter number:");
    scanf("%d", &n);
    for (int i=0; i<c; ++i)
    {
        printf("%d\n", n);
    }
    return 0;
}
