#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N=100;
    int x=0,i=0;
    int memory[N],InstrRegistor=0;
    int akkamulyator=0;
    int AdrRegistor;
    int OperRegistor;
    printf("Hello, user!\nEnter your command:\n");
    while (x!=-99999)
    {
        printf("%02d ", i);
        scanf("%d", &x);
        memory[i]=x;
        ++i;
    }
    printf("Go!\n");
    do
    {
        OperRegistor=memory[InstrRegistor]/100;
        AdrRegistor=memory[InstrRegistor]%100;
        switch (OperRegistor)
        {
        case 10:
            scanf("%d",&memory[AdrRegistor]);
            InstrRegistor++;
            break;
        case 11:
            printf("%+05d\n",memory[AdrRegistor]);
            InstrRegistor++;
            break;
        case 20:
            akkamulyator=memory[AdrRegistor];
            InstrRegistor++;
            break;
        case 21:
            memory[AdrRegistor]=akkamulyator;
            InstrRegistor++;
            break;
        case 30:
            akkamulyator+=memory[AdrRegistor];
            InstrRegistor++;
            break;
        case 31:
            akkamulyator-=memory[AdrRegistor];
            InstrRegistor++;
            break;
        case 32:
            akkamulyator/=memory[AdrRegistor];
            InstrRegistor++;
            break;
        case 33:
            akkamulyator*=memory[AdrRegistor];
            InstrRegistor++;
            break;
        case 40 :
            InstrRegistor=AdrRegistor;
            break;
        case 41:
            if (akkamulyator<0)
                InstrRegistor=AdrRegistor;
            else
                InstrRegistor++;
            break;
        case 42:
            if (akkamulyator==0)
                InstrRegistor=AdrRegistor;
            else
                InstrRegistor++;
            break;
        case 43:
            printf("end\n");
            break;
        }
    }
    while(OperRegistor!=43);
    return 0;
}
