#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int min;
    int max;
    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    min = a<b ? a:b;
    printf("min = %d\n", min);
    max = a>b ? a:b;
    printf("max = %d\n", max);
    return 0;
}
