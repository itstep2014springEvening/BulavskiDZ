#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    if (a%b==0)
    {
        printf("a/b\n");
    }
    else
    {
        printf("a!/b\n");
    }
    if (b%a==0)
    {
          printf("b/a\n");
    }
    else
    {
         printf("b!/a\n");
    }
    return 0;
}
