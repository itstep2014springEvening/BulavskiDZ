#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, x, n, b=12;
    printf("Vvedite chislo:");
    scanf("%d", &n);
    while (n>=b)
    {
        l=n%b;
        x=n/b;
        n=x;
        printf("%d\n",l);
    }
    printf("%d",x);
    return 0;
}
