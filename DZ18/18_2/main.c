#include <stdio.h>
#include <stdlib.h>
#include "myteam.h"

int main()
{
    const int N=100;
    int x=0,i=0;
    int memory[N],InstrRegistor=0;
    int akkamulyator=0;
    int AdrRegistor;
    int OperRegistor;
    int top=100, bias=0;
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
        if (memory[InstrRegistor]<0)
        {
            OperRegistor=(-memory[InstrRegistor]/100) ;
        }
        else
        {
            OperRegistor=(memory[InstrRegistor]/100);
        }
        AdrRegistor=memory[InstrRegistor]%100;
        switch (OperRegistor)
        {
        case READ:
            scanf("%d",&memory[AdrRegistor+bias]);
            InstrRegistor++;
            break;
        case WRITE:
            printf("%+05d\n",memory[AdrRegistor+bias]);
            InstrRegistor++;
            break;
        case LOAD:
            akkamulyator=memory[AdrRegistor+bias];
            InstrRegistor++;
            break;
        case STORE:
            memory[AdrRegistor+bias]=akkamulyator;
            InstrRegistor++;
            break;
        case LOADTOP:
            akkamulyator=top;
            InstrRegistor++;
            break;
        case STORETOP:
            top=akkamulyator;
            InstrRegistor++;
            break;
        case LOADBIAS:
            akkamulyator=bias;
            InstrRegistor++;
            break;
        case STOREBIAS:
            bias=akkamulyator;
            InstrRegistor++;
            break;
        case PUSH:
            memory[--top]=akkamulyator;
            InstrRegistor++;
            break;
        case POP:
            akkamulyator=memory[top++];
            InstrRegistor++;
            break;
        case ADD:
            akkamulyator+=memory[AdrRegistor+bias];
            InstrRegistor++;
            break;
        case SUBSTRACT:
            akkamulyator-=memory[AdrRegistor+bias];
            InstrRegistor++;
            break;
        case DIVIDE:
            akkamulyator/=memory[AdrRegistor+bias];
            InstrRegistor++;
            break;
        case MULTIPLY:
            akkamulyator*=memory[AdrRegistor+bias];
            InstrRegistor++;
            break;
        case LITERAL:
            akkamulyator=AdrRegistor;
            InstrRegistor++;
            break;
        case BRANCH :
            InstrRegistor=AdrRegistor;
            break;
        case BRANCHNEG:
            if (akkamulyator<0)
                InstrRegistor=AdrRegistor;
            else
                InstrRegistor++;
            break;
        case BRANCHZERO:
            if (akkamulyator==0)
                InstrRegistor=AdrRegistor;
            else
                InstrRegistor++;
            break;
        case HALT:
            printf("end\n");
            break;
        case CALL:
            memory[--top]=InstrRegistor;
            InstrRegistor=AdrRegistor;
            break;
        case RETURN:
            InstrRegistor=memory[top++]+1;
            top+=AdrRegistor;
            break;
        }
    }
    while(OperRegistor!=43);
    return 0;
}
