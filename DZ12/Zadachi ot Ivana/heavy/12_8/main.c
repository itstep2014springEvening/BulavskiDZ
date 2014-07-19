#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    printf("Vvedite chislo: ");
    scanf("%d", &n);
    printf("Vvedite delitel':");
    scanf("%d", &x);
    while(n%x==0)
    {
        n/=x;
        printf("%d\n",n);
    }
    printf("Finish");
    return 0;
}
