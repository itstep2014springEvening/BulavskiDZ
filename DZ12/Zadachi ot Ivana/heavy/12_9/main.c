#include <stdio.h>
#include <stdlib.h>

int main()
{
    double V, I, R, Va=0.28, Ia=0.3, Tv, Ti;
    printf("Vvedite skorost' Vlada (m/s):");
    scanf("%lf", &V);
    printf("Vvedite skorost' Ivana (m/s):");
    scanf("%lf", &I);
    printf("Vvedite dlinu distanzii (m):");
    scanf("%lf", &R);
    for (int i=1; i<=R; ++i)
    {
        Tv=i/V;
        if (i==R*0.57)
        {
            V-=V*Va;
        }
    }
    printf("Vlad = %.2f sec\n",Tv);
    for (int i=1; i<=R; ++i)
    {
        Ti=i/I;
        if (i==R*0.63)
        {
            I-=I*Ia;
        }
    }
    printf("Ivan = %.2f sec\n",Ti);
    return 0;
}
