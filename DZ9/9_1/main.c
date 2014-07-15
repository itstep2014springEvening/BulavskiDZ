#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h;
    int w;
    printf("Enter the height:");
    scanf("%d", &h);
    printf("Enter the width:");
    scanf("%d", &w);
    for (int i=1; i<=h; ++i)
    {
        for (int j=1; j<=w; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
