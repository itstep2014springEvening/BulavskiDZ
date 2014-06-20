#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z;
    printf("Vvedite chislo:\n");
    while (z>0)
    {
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            printf("How are you, user?\n");
            break;
        case 2:
            printf("Bye-bye, user.\n");
            break;
        case 0:
            break;
        default:
            printf("What?\n");
        }
    }

    return 0;
}
