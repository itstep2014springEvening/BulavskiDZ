#include <stdio.h>
#include <stdlib.h>

int main()
{
    float exorcismProcess=0.2;
    int flyNumber;
    float exorcismSpeed=5;
    float fatigueTime=5;
    float flyReturnSpeed=3;
    int exorcismTime=0;
    float flyResidue;
    printf("Vvedite chislo myh:");
    scanf("%d", &flyNumber);
    while (flyNumber>0)
    {
        ++exorcismTime;
        flyResidue=flyNumber-exorcismSpeed+flyReturnSpeed;
        flyNumber=flyResidue;
        if (exorcismTime==5)
        {
            exorcismSpeed-=exorcismSpeed*exorcismProcess;
        }
        printf("%.0f\n", flyResidue);
    }
    printf("%d", exorcismTime);
    return 0;
}
