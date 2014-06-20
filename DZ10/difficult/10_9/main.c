#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Zahar=10000;
    double Vadim=10000;
    double Procent=0.13;
    double MinProcent;
    double Vlad=0.63;
    double Sum=0;
    MinProcent=Procent/12;
    for (int i=0; i<12; ++i)
    {
        Sum=Sum+Vadim*MinProcent;
        if (i==6)
        {
            printf("Vadim = %.2f\n", Sum+Vadim);
        }
        if (i==4)
        {
            printf("Vlad  = %.2f\n",((Sum+Vadim)+(Sum+Zahar))*Vlad);
        }

    }
    Zahar+=Zahar*Procent;
    printf("Zahar = %.0f\n", Zahar);
    return 0;
}
