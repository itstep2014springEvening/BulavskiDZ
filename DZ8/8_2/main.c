#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S=1000, m=3, Pp=6, Sp=4, P;
    double V=1000;
    P=S*Pp/100;
    S+=P;
    while (V<=S)
    {
        printf("Mesyac: %d\n", m);
        printf("Sasha = %d\n", S);
        V+=V*Sp/100;
        S+=P;
        printf("Vasya = %.2f\n", V);
        if (V<S)
        {
            for (int i=0; i<=2; ++i)
            {
                m+=3;
                printf("Mesyac: %d\n", m);
                printf("Sasha = %d\n", S);
                V+=V*Sp/100;
                S+=P;
                printf("Vasya = %.2f\n", V);
            }
        }

    }
    return 0;
}
