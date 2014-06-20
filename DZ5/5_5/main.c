#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a=1;
    int b=0;
    int c;
    printf("Enter number n:\n");
    scanf("%d", &n);
    printf("__________\n");
    for (int i=n; i!=0; --i)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n", c);
    }
    return 0;
}
