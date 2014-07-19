#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, D, x1, x2, xA0;
    printf ("Vvedite a ");
    scanf ("%lf", &a);
    printf ("Vvedite b ");
    scanf ("%lf", &b);
    printf ("Vvedite c ");
    scanf ("%lf", &c);
    if (a==0)
    {
        xA0=-c/b;
        printf("x= %.2f", xA0);
    }
    else
    {
    D=b*b-(4*a*c);
    if (D<0)
    {
        printf ("Kornei net.");
    }
    else
    {
        D=sqrt(D);
        x1=(-b+D)/(2*a);
        x2=(-b-D)/(2*a);
        printf ("Otvet: x1= %.2f x2= %.2f", x1, x2);
    }
    }
    return 0;
}
