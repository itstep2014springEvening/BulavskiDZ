#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%f%f%f", &a, &b, &c);
    if (b==0 || c==0)
    {
        printf("%.0f + %.0f + %.0f = %.0f\n", a,b,c, a+b+c);
        printf("%.0f - %.0f - %.0f = %.0f\n", a,b,c, a-b-c);
        printf("%.0f * %.0f * %.0f = %.0f\n", a,b,c, a*b*c);
    }
    else
    {
        printf("%.0f + %.0f + %.0f = %.0f\n", a,b,c, a+b+c);
        printf("%.0f - %.0f - %.0f = %.0f\n", a,b,c, a-b-c);
        printf("%.0f * %.0f * %.0f = %.0f\n", a,b,c, a*b*c);
        printf("%.0f / %.0f / %.0f = %f\n", a,b,c, a/b/c);
        printf("%.0f / %.0f / %.0f = %.0f\n", a,b,c, a/b/c);
    }
    return 0;
}
