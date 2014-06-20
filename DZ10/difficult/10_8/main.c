#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,z=0;
    printf("Enter number n:");
    scanf("%d", &n);
    for (int i=0; i<n; ++i)
    {
        scanf("%d", &a);
        z+=a;
    }
    printf("Sum = %d\n",z);
    if (z>100)
    {
        printf("Your sum of numbers > 100\n");
    }
    else
    {
         printf("Your sum of numbers < 100\n");
    }
    return 0;
}
