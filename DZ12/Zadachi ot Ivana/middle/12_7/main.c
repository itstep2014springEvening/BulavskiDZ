#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Vvedite chislo:");
    scanf("%d", &n);
    for (int i=n-1; i>-1; --i)
    {
         printf("%d\n", i);
    }
    return 0;
}
