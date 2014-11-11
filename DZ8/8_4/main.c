##include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, result=0;
    char cymbol=65;
    printf("Enter number:");
    scanf("%d", &number);
    while (!result)
    {
        result=number/12*10+number%12;
        if (number%12==10)
            printf("%d%c", number/12, cymbol);
        else if (number%12==11)
            printf("%d%c", number/12, cymbol+1);
        else
            printf("%d", result);
    }
    return 0;
}

