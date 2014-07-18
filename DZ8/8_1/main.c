#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Vvedite vysotu m: ");
    scanf("%d", &m);
    printf("Vvtdite wirinu n: ");
    scanf("%d", &n);
    for (int i=0; i<=m; ++i)
    {
        for (int j=1; j<=n; ++j)
        {
            if (i%2==0)
            {
                printf("*");
                if (j<m)
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
                if (i<n)
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
