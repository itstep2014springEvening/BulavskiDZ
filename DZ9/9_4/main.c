#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char dejstvie;
    scanf("%d", &a);
    scanf("%c", &dejstvie);
    scanf("%d", &b);
    switch (dejstvie)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        while (b==0)
        {
            printf("Error! Na 0 delit' nel'zya\n");
            scanf("%d", &a);
            scanf("%c", &dejstvie);
            scanf("%d", &b);
        }
            printf("%d", a/b);
        break;
    }

    return 0;
}
