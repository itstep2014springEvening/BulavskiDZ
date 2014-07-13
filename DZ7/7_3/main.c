#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Vvedite diagonal' (nechetnoe chislo):");
    scanf("%d", &n);
    while (n%2==0)
    {
        printf("Oshibka! Vvedite nechetnoe chislo!\n");
        scanf("%d", &n);
    }
    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<n; ++j)
        {
            if (j-n+1==n/2-i || j==n/2+i || j==n/2-i || j==-n/2+i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
