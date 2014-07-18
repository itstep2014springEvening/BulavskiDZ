#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S=1000, m=3, Pp=6, Sp=4;
    double V=1000;
    S+=S*Pp/100;
    while (V<=S)
    {
        printf("Mesyac: %d\n", m);
        printf("Sasha = %d\n", S);
        V+=V*Sp/100;
        printf("Vasya = %.2f\n", V);
        if (V<S)
        {
            for (int i=0; i<=3; ++i)
            {
                m+=3;
                printf("Mesyac: %d\n", m);
                printf("Sasha = %d\n", S);
                V+=V*Sp/100;
                printf("Vasya = %.2f\n", V);
            }
        }

    }
    return 0;
}
