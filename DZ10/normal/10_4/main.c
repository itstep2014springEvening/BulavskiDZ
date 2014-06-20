#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    if (b==0)
    {
        printf("%d + %d= %d\n", a,b,a+b);
        printf("%d - %d= %d\n", a,b,a-b);
        printf("%d * %d= %d\n", a,b,a*b);
    }
    else
    {
        printf("%d + %d= %d\n", a,b,a+b);
        printf("%d - %d= %d\n", a,b,a-b);
        printf("%d * %d= %d\n", a,b,a*b);
        printf("%d / %d= %d\n", a,b,a/b);
    }

    return 0;
}
