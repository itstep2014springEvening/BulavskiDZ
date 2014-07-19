#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    if (a+b>c)
    {
        printf("a+b>c");
    }
    else
    {
        printf("a+b<c");
    }
    return 0;
}
