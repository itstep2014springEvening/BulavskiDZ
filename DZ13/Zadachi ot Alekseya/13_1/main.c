#include <stdio.h>
#include <stdlib.h>

int LCM (int a, int b);
int GCD (int a, int b);
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("GCD = %d\n", GCD(a,b));
    printf("LCM = %d", LCM(a,b));
    return 0;
}
int GCD (int a, int b)
{
    int c;
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
    return b;
}
int LCM (int a, int b)
{
    return a*(b/GCD(a,b));
}
