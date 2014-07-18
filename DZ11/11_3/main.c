#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    double e, eps=0.001, a;
    printf("Enter x ");
    scanf ("%d", &x);
    a=x-2;
    x+=2;
    for (a; a<=x; a+=0.1)
    {
        printf ("X=%.1f ", a);
        int i=1, b=2;
        double sum=1.0, dobavka=1.0;
        while(fabs(dobavka)>eps)
        {
            dobavka*=(a*a)/((i+1)*i);
            if (b%2==0)
            {
                sum+=(dobavka*(-1));
            }
            else
            {
                sum+=dobavka;
            }
            i+=2;
            ++b;
        }
        printf("Cos=%.3f ", sum);
        e=cos(a);
        printf("mathCos=%.3f ", e);
        printf("raznica=%f\n", e-sum);
    }
    return 0;
}
