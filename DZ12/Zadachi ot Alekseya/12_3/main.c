#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double a=1.0;
    double b=0;
    double c,m;
    printf("Enter number n:\n");
    scanf("%d", &n);
    printf("__________\n");
    for (int i=n; i!=0; --i)
    {
        c=a+b;
        a=b;
        b=c;
        m=a/b;
        printf("%.50f\n", m);
    }
    return 0;
}
