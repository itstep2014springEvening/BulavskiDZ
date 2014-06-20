#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int m;
    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    m=a*b;
    while (c>0)
    {
        c=a%b;
        a=b;
        b=c;
        if (c==0)
        {
            b=a;
        }
    }
    printf("GCD = %d\n", b);
    m/=b;
    printf("LCM = %d", m);
    return 0;
}
