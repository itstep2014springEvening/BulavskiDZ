#include <stdio.h>
#include <stdlib.h>

double power (double x, double p);
int main()
{
    int p;
    double x;
    printf("Enter number:\n");
    scanf("%lf", &x);
    printf("Enter power:\n");
    scanf("%d", &p);
    printf("_________\n");
    printf("%.3f", power(x,p));
    return 0;
}
double power (double x, double p)
{
    double n=1.0;
    double z;
    if (p>0)
    {
        for (int i=0; i<p; ++i)
        {
            n*=x;
        }
    }
     else
    {
        for (int i=0; i>p; --i)
        {
            n*=x;
        }
        z=1.0/n;
    }
    return (p>0)?n:z;
}
