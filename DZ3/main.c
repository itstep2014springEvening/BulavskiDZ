#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Please, enter a:\n");
    scanf("%d", &a);
    printf("Please, enter b:\n");
    scanf("%d", &b);
    printf("\n\t%d + %d = %d\n", a, b, a+b);
    printf("\n\t%d - %d = %d\n", a, b, a-b);
    printf("\n\t%d * %d = %d\n", a, b, a*b);
    printf("\n\t%d / %d = %d\n", a, b, a/b);
    printf("\n\t%d %% %d = %d\n", a, b, a%b);
    return 0;
}
