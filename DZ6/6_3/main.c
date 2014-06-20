#include <stdio.h>
#include <stdlib.h>


int main()
{
    int h;
    int w;
    printf("Enter h:");
    scanf("%d", &h);
    printf("Enter w:");
    scanf("%d", &w);
    for (int i=1; i<=h; ++i)
    {
        for (int j=1; j<=w; ++j)
        {
            if (i==1 || j==1 || i==h || j==w)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
