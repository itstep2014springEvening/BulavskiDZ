#include <stdio.h>
#include <stdlib.h>
#include "mymath.h"

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
