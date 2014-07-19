#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Vvedite chislo:");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
